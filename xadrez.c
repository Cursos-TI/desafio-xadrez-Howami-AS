#include <stdio.h>


int main() {


    //MOVIMENTANDO A TORRE 5 CASAS A DIREITA
    int inicio_t = 1, inicio_b = 1, inicio_r = 1, inicio_c = 1, i;

    while (inicio_t <= 5)
    {
        printf("[] %d:\n", inicio_t);
        inicio_t ++;
    }
    printf("\nTorre movimentada %d casas a direita.\n", inicio_t-1);

printf("\n\n***************************************\n\n");
    
    //MOVIMENTANDO BISPO

    do
    {
        printf("[ %d:\n", inicio_b);
        inicio_b ++;

    } while (inicio_b <= 6);
    
    printf("\nBispo movimentado %d casas Diagonalmente a Direita/Cima.\n", inicio_b-1);

printf("\n\n***************************************\n\n");

    //MOVIMENTO RAINHA

    for(inicio_r; inicio_r <= 8; inicio_r ++)
    {
        printf("[] %d: \n", inicio_r);
    } printf("\nRainha movimentou %d casas a Esquerda.\n", inicio_r-1);

printf("\n\n***************************************\n\n");
        //MOVIMENTO DO CAVALO COM LOOPS ANINHADOS
    for (i = 1; i < 6; i++)
    {
        printf("[Direita] %d: \n", i);
            for (inicio_c; inicio_c < 4; inicio_c++)
            {
                printf("[Cima] %d: \n", inicio_c);
            }

    } 
        
printf("O cavalo movimentou %d vezes a direita e %d vezes para cima!\n\n", i-1, inicio_c-1);
}
