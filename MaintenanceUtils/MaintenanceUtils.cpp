#include "framework.h"
#include "MaintenanceUtils.h"
#include "CWindow.h"
#include <windows.h>

//public MaintenanceUtils
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
    switch (message)
    {
        case WM_CREATE:
        {
            return 0;
        }
        case WM_PAINT:
        {
            return 0;
        }
        case WM_DESTROY:
        {
            DestroyWindow(hwnd);
        }
    }
    return DefWindowProc(hwnd, message, wparam, lparam);
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR args, int nshow) 
{
    static WNDCLASS wndclass;
    static MSG msg;

    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc = WndProc;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = hInst;
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.lpszMenuName = NULL;
    wndclass.lpszClassName = L"MaintenanceUtils";

    if (!RegisterClass(&wndclass))
    {
        return 1;
    }
    
    std::wstring wTitle = L"wTitle";
    CWindow wnd(&wTitle, wndclass, 800, 600);
    wnd.Show();

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}