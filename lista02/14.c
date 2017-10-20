/*
* Retornar sim se numero for palindromo ou não caso contrario
*/
#include <stdio.h>
/*
* Inverter o numero inserido
*/
int palindromo (int numero,int inverso) {
    if (numero<10) return (inverso*10+numero);
    inverso=(inverso*10)+(numero%10);
    return palindromo (numero/10,inverso);
}

int main () {
    int numero;
    scanf("%d" ,&numero);
    if (numero == palindromo (numero,0)) {
        printf ("sim\n");
    } else {
        printf("nao\n");
    }
}
