#include <stdio.h>

//Função Recursiva da Torre (movimento para Direita)
void torre (int mov) 
{
    if (mov > 0)
    {
        printf("Torre pra Direita\n");
        torre (mov -1);
    }
}

//Função Recursiva da Rainha (movimento para Esquerda)
void rainha (int mov) 
{
    if (mov > 0)
    {
        printf("Rainha pra Esquerda\n");
        rainha (mov - 1);
    }
}

//Função recursiva do Bispo (movimento pra cima + esquerda)
void bispo (int movBispo)
{
    if (movBispo > 0)
    {
        printf("Bispo pra Cima,Direita\n");
        bispo (movBispo - 1);
    }  
}

//Função recursiva do Cavalo (mivimento pra cima + direita)
void cavalo ()
{
    for(int i = 0; i < 2; i++)
    {
        printf("Cavalo para Cima\n");
        if(i == 2) break;

        if (i == 1)
        {
            printf("Cavalo para Direita\n");
        }
    }

}


int main() {
   
    //Valores do Movimento
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int movCavalo = 1;

    // Torre
    printf("Movimento da Torre\n");
    torre(movTorre);

    printf("\n");
    printf("\n");

    //Rainha
    printf("Movimento da Rainha\n");
    rainha(movRainha);

    printf("\n");
    printf("\n");

    //Bispo
    printf("Movimento da Bispo\n");
    bispo(movBispo);

    printf("\n");
    printf("\n");

    //Cavalo
    printf("Movimento da Cavalo\n");
    cavalo(movCavalo);

    return 0;
}
