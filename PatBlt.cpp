#include <Windows.h>

int main()
{
	HDC hdc = 0;
	int sx = 0, sy = 0;
	int rx = 0, ry = 0;
	

	while (1)
	{
		ShowWindow(GetConsoleWindow(), SW_HIDE);
		hdc = GetWindowDC(GetDesktopWindow());
		sx = GetSystemMetrics(SM_CXSCREEN);
		sy = GetSystemMetrics(SM_CYSCREEN);
		rx = rand() % sx;
		ry = rand() % sy;
		SelectObject(hdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		StretchBlt(hdc, rx, ry, rand() % sx + rx, rand() % sy + ry, hdc, rx, ry, rand() % sx, rand() % sy, PATINVERT);
		Sleep(10);
	}
}