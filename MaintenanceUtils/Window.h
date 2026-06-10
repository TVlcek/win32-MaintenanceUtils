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
		CWindow(std::wstring title);
		//WIP
};

