/*
* Calcular potência
*/
#include <stdio.h>
/*
* função para calcular potencia
*/
int potencia (int base,int expoente) { 
    if (expoente==0) return 1;
    return base*potencia(base,expoente-1);
}

int main () {
    int base,expoente;

    scanf("%d %d",&base,&expoente);
    printf("%d\n",potencia(base,expoente));
}
