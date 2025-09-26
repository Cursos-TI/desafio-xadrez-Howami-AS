#include <stdio.h>


int main() {


    //MOVIMENTANDO A TORRE 5 CASAS A DIREITA
    int inicio_t = 0, inicio_b = 0, inicio_r = 0;

    while (inicio_t < 5)
    {
        printf("[] %d:\n", inicio_t);
        inicio_t ++;
    }
    printf("\nTorre movimentada %d casas a direita.\n", inicio_t);

printf("\n\n***************************************\n\n");
    
    //MOVIMENTANDO BISPO

    do
    {
        printf("[ %d:\n", inicio_b);
        inicio_b ++;

    } while (inicio_b < 6);
    
    printf("\nBispo movimentado %d casas Diagonalmente a Direita/Cima.\n", inicio_b);

printf("\n\n***************************************\n\n");

    //MOVIMENTO RAINHA

    for(inicio_r; inicio_r < 8; inicio_r ++)
    {
        printf("[] %d: \n", inicio_r);
    } printf("\nRinha movimentada %d casas a Esquerda.\n", inicio_r);

printf("\n\n***************************************\n\n");

}
