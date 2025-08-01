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
void bispo (int movHorizontal,int movVertical)
{
    for(int i = 0; i < movVertical; i++)
    {
        for(int j = 0; j < movHorizontal; j++)
        {
            printf("Bispo para Cima\n");
            printf("Bispo para Esquerda\n");
        }
    }    
}

//Função recursiva do Cavalo (mivimento pra cima + direita)
void cavalo (int mov)
{
    for(int i = 1, j = 1; i <= 2 && j = 1; i++)
    {
        printf("Cavalo pra cima");
    }
}


int main() {
   
    //Valores do Movimento
    int movTorre = 5;
    int movBispoVertiical = 2;
    int movBispoHorizontal = 2;
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
    bispo(movBispoHorizontal, movBispoVertiical);

    printf("\n");
    printf("\n");

    //Cavalo
    printf("Movimento da Cavalo\n");
    cavalo(movCavalo);

    return 0;
}
