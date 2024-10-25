#include "entry_point.h"

#include "window.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    WNDCLASS window_class = { 0 };
    window_class.lpfnWndProc = WindowProc;
    window_class.hInstance = hInstance;
    window_class.lpszClassName = rw_window_class_name;

    RegisterClass(&window_class);

    HWND handle_window = CreateWindowEx(
        0, rw_window_class_name, rw_window_class_name,
        WS_OVERLAPPEDWINDOW,
        rw_window_width, rw_window_height, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL, NULL, hInstance, NULL);
    if (handle_window == NULL) return r_ER;

    ShowWindow(handle_window, nShowCmd);
    UpdateWindow(handle_window);

    MSG message;
    while (GetMessage(&message, NULL, 0, 0)) { TranslateMessage(&message); DispatchMessage(&message); }

    return r_OK;
}
