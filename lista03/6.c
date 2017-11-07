/*
*  Receber um vetor, ordenar e calcular mediana.
*/ 

#include <stdio.h>
#include <stdlib.h>

/*
*  Ordenar
*/ 

int cmpfunc (const void * a, const void *b) {
    return (*(int*)a - *(int*)b );
}

/*
*  Calcular mediana
*/ 

double mediana (int *vetor,int i,int n) 
{   
    int m=n/2;
    if (n%2==0) {
        double mediana = *(vetor+(m-1))+*(vetor+m);
        return mediana/2;
    }
    else
        return *(vetor+m);
}

int main()
{
    int n,i;
    scanf("%i",&n);
    int vetor [n];
    
    for(i=0; i<n ;i++)
        scanf("%i", vetor+i);

    qsort(vetor, n, sizeof(int), cmpfunc);   
    printf ("%.2lf\n",mediana(vetor,i,n));

}
