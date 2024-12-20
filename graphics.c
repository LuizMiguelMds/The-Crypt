/*arquivo.c do graphics.h*/

#include "graphics.h"

void TextColor(int letras, int fundo) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), letras + fundo);
}

void resetColor() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE | _BLACK);
}

void linhaCol(int lin, int col) {
    COORD coord;
    coord.X = col - 1;
    coord.Y = lin - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void box(int lin1, int col1, int lin2, int col2) {
    int i, j;

    /* Linhas horizontais*/
    for (i = col1; i <= col2; i++) {
        linhaCol(lin1, i);
        printf("%c", HORIZONTAL);
        linhaCol(lin2, i);
        printf("%c", HORIZONTAL);
    }

    /* Linhas verticais*/
    for (i = lin1; i <= lin2; i++) {
        linhaCol(i, col1);
        printf("%c", VERTICAL);
        linhaCol(i, col2);
        printf("%c", VERTICAL);
    }

    /* Preenchimento do fundo*/
    for (i = lin1 + 1; i < lin2; i++) {
        for (j = col1 + 1; j < col2; j++) {
            linhaCol(i, j);
            printf(" ");
        }
    }

    /* Cantos*/
    linhaCol(lin1, col1);
    printf("%c", TOP_LEFT);
    linhaCol(lin1, col2);
    printf("%c", TOP_RIGHT);
    linhaCol(lin2, col1);
    printf("%c", BOTTOM_LEFT);
    linhaCol(lin2, col2);
    printf("%c", BOTTOM_RIGHT);
}

void theCrypt(){
    printf("    ¦¦¦        _¦    ¦_       _¦¦¦¦¦¦¦¦       _¦¦¦¦¦¦¦¦    _¦¦¦¦¦¦¦¦ _¦¦   _      _¦¦¦¦¦¦¦_     ¦¦¦     \n");
    printf("¯¦¦¦¦¦¦¦¦¦_   ¦¦¦    ¦¦¦     ¦¦¦    ¦¦¦      ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦   ¦¦_   ¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦_ \n");
    printf("   ¯¦¦¦¯¯¦¦   ¦¦¦    ¦¦¦     ¦¦¦    ¦¯       ¦¦¦    ¦¯    ¦¦¦    ¦¦¦ ¦¦¦___¦¦¦   ¦¦¦    ¦¦¦    ¯¦¦¦¯¯¦¦ \n");
    printf("    ¦¦¦   ¯  _¦¦¦____¦¦¦__  _¦¦¦___          ¦¦¦         _¦¦¦____¦¦¯ ¯¯¯¯¯¯¦¦¦   ¦¦¦    ¦¦¦     ¦¦¦   ¯ \n");
    printf("    ¦¦¦     ¯¯¦¦¦¯¯¯¯¦¦¦¯  ¯¯¦¦¦¯¯¯          ¦¦¦        ¯¯¦¦¦¯¯¯¯¯   _¦¦   ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¯      ¦¦¦     \n");
    printf("    ¦¦¦       ¦¦¦    ¦¦¦     ¦¦¦    ¦_       ¦¦¦    ¦_  ¯¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦   ¦¦¦   ¦¦¦            ¦¦¦     \n");
    printf("    ¦¦¦       ¦¦¦    ¦¦¦     ¦¦¦    ¦¦¦      ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦   ¦¦¦   ¦¦¦            ¦¦¦     \n");
    printf("   _¦¦¦¦¯     ¦¦¦    ¦¯      ¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¯    ¦¦¦    ¦¦¦  ¯¦¦¦¦¦¯   _¦¦¦¦¯         _¦¦¦¦¯   \n");
    printf("                                                         ¦¦¦    ¦¦¦                                     \n");
}

