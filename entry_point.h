#ifndef wine_entry_point_h
#define wine_entry_point_h

#include <Windows.h>

#define rw_window_class_name "wine"

#define rw_window_width 757
#define rw_window_height 477

#define r_OK 0
#define r_ER 1

#define rw_quit(x) (PostQuitMessage((x)))

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);

#endif
