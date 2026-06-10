#include "window.h"
#include <Windows.h>
#include <stdexcept>
#include <string>

CWindow::CWindow(std::wstring* WstrWindowTitle, int SizeX, int SizeY, )
{
	if (WstrWindowTitle->empty() || SizeX <= 0 || SizeY <= 0, )
	{
		throw std::invalid_argument("Invalid arguments passed for creating a new window");
	}

	this->WindowHandle = CreateWindowEx(3, WstrWindowTitle->c_str(), );
	
	if (this->WindowHandle == nullptr || this->WindowHandle == INVALID_HANDLE_VALUE)
	{
		MessageBox(nullptr, L"Window handle creation failed (Returned HWND is invalid", L"MaintenanceUtils", MB_ICONSTOP);
		return;
	}

}
CWindow::~CWindow()
{
	HWND hwnd = this->WindowHandle;
	DestroyWindow(hwnd);
}


