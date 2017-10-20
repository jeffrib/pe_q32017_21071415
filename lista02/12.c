/*
* Calcular coeficiente binomial
*/
#include <stdio.h>
/*
* Realizar o calculo de n fatorial
*/
int fatorial (int n) { 
    if (n==0 || n==1) return 1;
    return n*fatorial(n-1);
} 
/*
* Calcular coeficiente binomial
*/
int binomial(int n, int k) { 
    float binomial;
    binomial=fatorial(n);
    binomial/=fatorial(k);
    binomial/=fatorial(n-k);
    
    return binomial;
} 

int main () {
    int n,k;
    scanf("%d %d" ,&n,&k);
    printf("%d\n",binomial(n,k));
}
