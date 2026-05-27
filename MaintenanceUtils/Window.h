#include <windows.h>
#include <string.h>

#pragma once
class Window
{
	private:
		HANDLE HWND;
		MSG msg;

	public:
		Window(std::string title);
		//WIP
};

