#include <Windows.h> // ���������� WinAPI

int main()
{
    HWND desktopHWnd = FindWindow("ProgMan", NULL); // �������� HWnd �������� �����

    ShowWindow(desktopHWnd, SW_HIDE); // �������� ������� ����

    return 0;
}
