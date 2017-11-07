/*
*  Receber a matriz e calcular a transposta
*/ 

#include <stdio.h>

/*
*  Fazer a leitura da matriz
*/

int leitura (int matriz[3][3], int i, int j)
{   
    for (i=0;i<3;i++) {
        for (j=0; j<3; j++) {
            scanf("%i",&matriz[i][j]);  
        }
    }
    
    printf("\n");
    return matriz[3][3];
}

/*
*  Imrpimir a matriz transposta
*/

void imprime(int matriz[3][3], int i, int j)
{
    for (i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%i ",matriz[j][i]);
        
        printf("\n");
    } 
}

int main()
{
    int i=0,j=0;
    int matriz[3][3]={0};
    leitura(matriz,i,j);
    imprime(matriz,i,j);

}
