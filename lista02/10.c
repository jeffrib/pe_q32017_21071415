/*
* Verificar se array tem valor de Fibonnacci, caso contrario, calcular
*/
#include <stdio.h>

int fibMem[1000]={0};

int fib (int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;
    return fibMem[n]=fib(n-1)+fib(n-2);
}

int main () 
{
    int n;
    
    fibMem[1]=1;
    fibMem[2]=1;
    scanf("%d",&n);

    if (fibMem[n]!=0) {
        printf("%d\n", fibMem[n]);
    } else {
    printf("%d\n", fib(n));
    }
    return 0;   
}
