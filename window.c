#include "window.h"

LRESULT CALLBACK WindowProc(HWND r_handle_window, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg == WM_DESTROY) { rw_quit(r_OK); return r_OK; }
    return DefWindowProc(r_handle_window, uMsg, wParam, lParam);
}
