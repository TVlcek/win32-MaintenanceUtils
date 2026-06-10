//ENG: Wraps windows API window functions, most of the code relies on creating a window handle (HWND)
//	   and calling windows API functions on the given window handle


#include "CWindow.h"
#include <Windows.h>
#include <stdexcept>
#include <string>

CWindow::CWindow(std::wstring* WstrWindowTitle, int SizeX, int SizeY)
{
	if (WstrWindowTitle->empty() || SizeX <= 0 || SizeY <= 0)
	{
		throw std::invalid_argument("Invalid arguments passed for creating a new window");
	}

	this->WindowHandle = CreateWindowEx(3, WstrWindowTitle->c_str(), WstrWindowTitle->c_str(), 0, SizeX, SizeY, 0, 0, nullptr, nullptr, nullptr, nullptr);
	
	if (this->WindowHandle == nullptr || this->WindowHandle == INVALID_HANDLE_VALUE)
	{
		std::wstring wstrErrCode = std::to_wstring(GetLastError());
		MessageBox(nullptr, L"Window handle creation failed (Returned HWND is invalid", L"MaintenanceUtils", MB_ICONSTOP);
		return;
	}

}
bool CWindow::Show()
{
	if (this->WindowHandle == nullptr)
	{
		return false;
	}

	if (!ShowWindow(this->WindowHandle, SW_SHOW))
	{
		/*GetLastError();*/
		return false;
	}

	return true;
}
CWindow::~CWindow()
{
	HWND hwnd = this->WindowHandle;
	DestroyWindow(hwnd);
}


