#include <windows.h>

#pragma comment(linker, "/export:ApplyCompatResolutionQuirking=C:\\Windows\\System32\\dxgi.dll.ApplyCompatResolutionQuirking")
#pragma comment(linker, "/export:CompatString=C:\\Windows\\System32\\dxgi.dll.CompatString")
#pragma comment(linker, "/export:CompatValue=C:\\Windows\\System32\\dxgi.dll.CompatValue")
#pragma comment(linker, "/export:CreateDXGIFactory=C:\\Windows\\System32\\dxgi.dll.CreateDXGIFactory")
#pragma comment(linker, "/export:CreateDXGIFactory1=C:\\Windows\\System32\\dxgi.dll.CreateDXGIFactory1")
#pragma comment(linker, "/export:CreateDXGIFactory2=C:\\Windows\\System32\\dxgi.dll.CreateDXGIFactory2")
#pragma comment(linker, "/export:DXGID3D10CreateDevice=C:\\Windows\\System32\\dxgi.dll.DXGID3D10CreateDevice")
#pragma comment(linker, "/export:DXGID3D10CreateLayeredDevice=C:\\Windows\\System32\\dxgi.dll.DXGID3D10CreateLayeredDevice")
#pragma comment(linker, "/export:DXGID3D10GetLayeredDeviceSize=C:\\Windows\\System32\\dxgi.dll.DXGID3D10GetLayeredDeviceSize")
#pragma comment(linker, "/export:DXGID3D10RegisterLayers=C:\\Windows\\System32\\dxgi.dll.DXGID3D10RegisterLayers")
#pragma comment(linker, "/export:DXGIDeclareAdapterRemovalSupport=C:\\Windows\\System32\\dxgi.dll.DXGIDeclareAdapterRemovalSupport")
#pragma comment(linker, "/export:DXGIDisableVBlankVirtualization=C:\\Windows\\System32\\dxgi.dll.DXGIDisableVBlankVirtualization")
#pragma comment(linker, "/export:DXGIDumpJournal=C:\\Windows\\System32\\dxgi.dll.DXGIDumpJournal")
#pragma comment(linker, "/export:DXGIGetDebugInterface1=C:\\Windows\\System32\\dxgi.dll.DXGIGetDebugInterface1")
#pragma comment(linker, "/export:DXGIReportAdapterConfiguration=C:\\Windows\\System32\\dxgi.dll.DXGIReportAdapterConfiguration")
#pragma comment(linker, "/export:PIXBeginCapture=C:\\Windows\\System32\\dxgi.dll.PIXBeginCapture")
#pragma comment(linker, "/export:PIXEndCapture=C:\\Windows\\System32\\dxgi.dll.PIXEndCapture")
#pragma comment(linker, "/export:PIXGetCaptureState=C:\\Windows\\System32\\dxgi.dll.PIXGetCaptureState")
#pragma comment(linker, "/export:SetAppCompatStringPointer=C:\\Windows\\System32\\dxgi.dll.SetAppCompatStringPointer")
#pragma comment(linker, "/export:UpdateHMDEmulationStatus=C:\\Windows\\System32\\dxgi.dll.UpdateHMDEmulationStatus")

BOOL WINAPI DllMain(HINSTANCE module, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        MessageBoxA(nullptr, "Hello from DLL!", "UE Mod Loader", MB_OK | MB_ICONINFORMATION);
    }
    return TRUE;
}