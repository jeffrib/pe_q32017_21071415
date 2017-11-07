/*
*  Receber um vetor e contar quantas vezes o numero se repete
*/ 

#include <stdio.h>
#include <stdlib.h>

/*
*  Verificar repetição dentro do vetor
*/ 

void verifica (int *v,int *aux2,int *cont,int aux, int j, int k, int n)
{
    aux = v[k];
    for(j=0;j<n;j++)
        if((k!=j)&&(aux==v[j])) {
            cont[k]++;
            if(aux2[k]==0) aux2[j]=10;
        }
}

/*
*  Imprimir o numero que se repete e a quantidade
*/ 

void imprime (int *v, int *aux2, int *cont,int j, int n)
{
    for(j=0;j<n;j++)
        if(aux2[j]== 0 && cont[j]!=1)
            printf("%d-%d ",v[j],cont[j]);
    printf("\n");
      
}

int main ()
{
    int n,k,aux,j;
    scanf("%d",&n);
    
    int*v=(int*)malloc(n*sizeof(int));
    int*cont=(int*)malloc(n*sizeof(int));
    int*aux2=(int*)malloc(n*sizeof(int));
    
    for(j=0;j<n;j++)
    {
        aux2[j]=0;
        cont[j]=1;
    }
    
    for(j=0;j<n;j++)
        scanf("%d",&v[j]);
    
    for(k=0;k<n;k++)
        verifica(v,aux2,cont,aux,j,k,n);
    
    imprime (v,aux2,cont,j,n);

}
