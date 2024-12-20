//arquivo.c do graphics.h

#include "graphics.h"

void linhaCol(int lin, int col) {
    COORD coord;
    coord.X = col - 1;
    coord.Y = lin - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
