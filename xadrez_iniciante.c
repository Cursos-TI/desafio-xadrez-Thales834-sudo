#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tamanho_tabuleiro_X = 8, Tamanho_tabuleiro_Y = 8,contador = 0;
    
    
    //torre feita utilizando FOR
    
    for (int movimentacao = 0; movimentacao < 5; movimentacao++)
    {
        printf("Torre:Direita\n");
    }
    printf("\n");
    
    //bispo  utilizando WHILE
    
    while ( contador < 5)
    {
        contador++;
        printf("Bispo: Cima\n");
        printf("Bispo: Direita\n");
    }
    printf("\n");
    
    // rainha utilizando do while
    contador = 0;
    do
    {
        contador++;
        printf("Rainha: esquerda\n");
    } while (contador < 8);
    


    return 0;
}
