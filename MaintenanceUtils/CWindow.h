#include <windows.h>
#include <string>

#pragma once
class CWindow
{
	private:
		HWND WindowHandle;
		WNDCLASS WindowClass;
		MSG msg;

	public:
		~CWindow();
		CWindow(std::wstring* WstrWindowTitle, WNDCLASS wnd, int SizeX, int SizeY);
		bool Show();

		enum class WNDStatus
		{
			Shown = 1, // window was shown
			Hidden = 2, // window is hidden
			ToBeDisposed = 3, //CWindow object is marked as no longer usable and waiting to be destroyed
		};
};

