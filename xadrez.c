# include <stdio.h>

//FUNÇÃO DEFINIDA PARA MOVIMENTAR TORRE
void moverTorre(int num){

    if (num > 0)
    {
        printf("Direita, ");
        moverTorre(num - 1);

    }
}
//FUNÇÃO DEFINIDA PARA MOVIMENTAR BISPO
void moverBispo(int num1){

  if (num1 > 0)
  {
    
    for(int i = 0; i < 1; i++){
        printf("Direita, ");
        for (int j = 0; j < 1; j++)
        {
           printf("Cima, ");
        }
        
    }
    moverBispo(num1 - 1);
  }
}
//FUNÇÃO DEFINIDA PARA MOVIMENTAR RAINHA
void moverRainha(int num2){
    if (num2 > 0)
    {
        printf("Esquerda, ");
        moverRainha(num2 - 1);
    }
}


int main(){

    printf("\n\nMovimento da Torre: \n");
    moverTorre(5);
printf("\n\n******************************\n\n");

    printf("Movimento do Bispo: \n");
    moverBispo(6);
printf("\n\n******************************\n\n");

    printf("Movimento da Rainha: \n");
    moverRainha(8);
printf("\n\n******************************\n\n");

    printf("Movimento do Cavalo.\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Cima, ");

        if (i >= 1)
        {
            printf("Direita.\n\n");
            break;
        }

    }
    return 0;

}

