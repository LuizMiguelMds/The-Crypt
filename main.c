#include <stdio.h>
#include <stdlib.h>
#include "graphics.h"

int main() {
    int opc;
    char lista[4][40] = {"Novo Jogo", "Carregar Jogo", "Configs", "Sair/Encerrar programa"};
    
    system("chcp 437 > nul");
    
    while (1) {
        theCrypt(); /* Exibe o cabecalho apenas uma vez por loop */
        opc = menuPrincipal(15, 4, 4, lista); /* Exibe o menu principal */

        switch (opc) {
            case 1:
                resetColor();
                break;
            case 2:
                resetColor();
                break;
            case 3:
                resetColor();
                break;
            case 4:
                linhaCol(30, 25);
                printf("Encerrando o programa...\n");
                resetColor();
                exit(0);
                break;
        }
    }
    resetColor();
    return 0;
}

