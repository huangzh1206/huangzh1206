#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void setConsoleSize(int width, int height) {
    _COORD coord;
    coord.X = width;
    coord.Y = height;
    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = height - 1;
    Rect.Right = width - 1;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(handle, coord);
    SetConsoleWindowInfo(handle, TRUE, &Rect);
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawFirework(int x, int y) {
    int colors[] = { 2, 4, 6, 9, 11, 13 };
    int numColors = sizeof(colors) / sizeof(colors[0]);

    for (int i = 0; i < 6; i++) {
        int color = colors[rand() % numColors];
        gotoxy(x, y + i);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
        cout << "*";
    }

    gotoxy(x, y + 6);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "|";
}

int main() {
    srand(time(0));

    setConsoleSize(80, 25);

    while (true) {
        system("cls");

        int x = rand() % 80;
        int y = rand() % 18 + 6;

        drawFirework(x, y);

        Sleep(100);
    }

    return 0;
}