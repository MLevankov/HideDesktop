#include <Windows.h> // Подключаем WinAPI

int main()
{
    HWND desktopHWnd = FindWindow("ProgMan", NULL); // Получаем HWnd рабочего стола

    ShowWindow(desktopHWnd, SW_HIDE); // Скрываем рабочий стол

    return 0;
}
