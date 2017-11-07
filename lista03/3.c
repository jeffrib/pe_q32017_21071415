/*
*  Receber dois vetores e calcular a soma
*/ 

#include <stdio.h>	
#include <stdlib.h>

/*
*  Realizar soma dos vetores
*/ 

void soma (int *v1, int *v2, int *v3,int i) 
{
    for (i=0; i<5; i++) {
        *(v3+i)=*(v1+i)+*(v2+i);
    }
}

/*
*  Imprimir a soma
*/ 

void imprimir (int *v3,int i)
{
    for(i=0; i<5; i++) {
        printf("%d ",v3[i]);
    }
    printf("\n");
}

int main ()
{
    int *v1,*v2,*v3;
    int i;
    v1 = (int*)malloc(sizeof(int)*5);
    v2 = (int*)malloc(sizeof(int)*5);
    v3 = (int*)malloc(sizeof(int)*5);
    
    for(i=0; i<5 ;i++)
        scanf("%i", v1+i);
    for(i=0; i<5 ;i++)
        scanf("%i", v2+i);   
    
    soma(v1,v2,v3,i);
    imprimir(v3,i);
}
