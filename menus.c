/* source para execucao dos menus */

#include "menus.h"

int menuPrincipal(int lin1, int col1, int qtd, char lista[][40]) {
    int opc = 1;
    int lin2, col2, linha, i, tamMaxitem, tecla;

    tamMaxitem = strlen(lista[0]);

    for (i = 1; i < qtd; i++) {
        if (strlen(lista[i]) > tamMaxitem) {
            tamMaxitem = strlen(lista[i]);
        }
    }

    lin2 = lin1 + (qtd * 2 + 2);
    col2 = col1 + tamMaxitem + 4;

    TextColor(WHITE, _RED);
    setlocale(LC_ALL, "C");
    box(lin1, col1, lin2, col2);
    setlocale(LC_ALL, "");

    while (1) {
        linha = lin1 + 2;
        for (i = 0; i < qtd; i++) {
            if (i + 1 == opc)
                TextColor(BLACK, _WHITE);
            else
                TextColor(WHITE, _RED);

            linhaCol(linha, col1 + 2);
            printf("%s", lista[i]);
            linha += 2;
        }

        linhaCol(1, 1);
        tecla = getch();

       /* Controle do menu com as setas do teclado*/
        if (tecla == 80) { /* Seta para baixo */
            opc++;
            if (opc > qtd) opc = 1;
        } else if (tecla == 72) { /* Seta para cima*/
            opc--;
            if (opc < 1) opc = qtd;
        } else if (tecla == 13) { /* Enter*/
            return opc;
        }
    }
}
