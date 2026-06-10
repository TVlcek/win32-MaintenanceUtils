#include <windows.h>
#include <string.h>

#pragma once
class CWindow
{
	private:
		HWND WindowHandle;

		MSG msg;

	public:
		~CWindow();
		CWindow(std::wstring* WstrWindowTitle, int SizeX, int SizeY);
		//WIP
};

