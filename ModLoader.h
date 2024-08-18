#pragma once
#include <string>
#include <vector>

class ModLoader {
public:
    static void LoadDlls();

private:
    static std::string m_modsFolder;

    static std::vector<std::string> GetDlls();
    static void LoadDll(const std::string& dll);
};

