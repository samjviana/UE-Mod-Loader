#include <filesystem>
#include <fstream>
#include <windows.h>

#include "ModLoader.h"

namespace fs = std::filesystem;

std::string ModLoader::m_modsFolder = ".\\mods";

void ModLoader::LoadDlls() {
    // This seems to be necessary to allow the game to swap from the launcher to the actual game .exe
    Sleep(1000);

    const std::vector<std::string>& dlls = GetDlls();
    for (const auto& dll : dlls) {
        LoadDll(dll);
    }
}

std::vector<std::string> ModLoader::GetDlls() {
    std::vector<std::string> dlls;

    std::filesystem::create_directories(m_modsFolder);

    for (const auto& file : std::filesystem::directory_iterator(m_modsFolder)) {
        if (!file.is_regular_file()) continue;

        const std::filesystem::path& filePath = file.path();
        
        if (filePath.extension() != ".dll" && filePath.extension() != ".DLL") continue;

        std::filesystem::path relativePath = std::filesystem::relative(filePath, m_modsFolder);
        dlls.push_back(filePath.string());
    }

    return dlls;
}

void ModLoader::LoadDll(const std::string& dll) {
    if (LoadLibraryA(dll.c_str())) return;

    DWORD errorCode = GetLastError();
    std::string errorMessage = std::format("Failed to load DLL: {} (Error Code: {})", dll, errorCode);
    MessageBoxA(nullptr, errorMessage.c_str(), "Mod Loader - Error", MB_ICONERROR | MB_OK);
}