/*cabešarios do display/interface do jogo */

/*define caracteres especiais para a box*/
#include <conio.h>
#include <windows.h>
#include <locale.h>
#define HORIZONTAL 205
#define VERTICAL 186
#define TOP_LEFT 201
#define TOP_RIGHT 187
#define BOTTOM_LEFT 200
#define BOTTOM_RIGHT 188

/*lista das cores do texto*/
enum COLORS {
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
};
/*lista das cores do fundo*/
enum BACKGROUND_COLORS {
    _BLACK = 0,
    _BLUE = 16,
    _GREEN = 32,
    _CYAN = 48,
    _RED = 64,
    _MAGENTA = 80,
    _BROWN = 96,
    _LIGHTGRAY = 112,
    _DARKGRAY = 128,
    _LIGHTBLUE = 144,
    _LIGHTGREEN = 160,
    _LIGHTCYAN = 176,
    _LIGHTRED = 192,
    _LIGHTMAGENTA = 208,
    _YELLOW = 224,
    _WHITE = 240
};
/*define as cores do texto*/
void textColor(int letras, int fundo);
/*define as cores do texto de fundo*/
void resetColor();
/*funcao para movimentacao de texto no terminal*/
void linhaCol(int linha, int col);
/*funcao para a criacao da box grafica*/
void box(int lin1, int col1, int lin2, int col2);
/*Imprime o cabecalho do jogo*/
void theCrypt();
