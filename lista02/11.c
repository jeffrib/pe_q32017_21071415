/*
* Converter de decimal para binario ou binario para decimal
*/
#include <stdio.h>
#include <math.h>
/*
* Conversão de decimal para binario
*/
int decimal_binario (int numero,int mult, int conversao) { 
    if (numero==1) return conversao+mult;
    conversao+=((numero%2)*mult);
    return decimal_binario(numero/2,mult*10,conversao);
} 
/*
* Conversão de binario para decimal
*/
int binario_decimal (int numero,int mult, int conversao) { 
    if (numero==1) return conversao+pow(2,mult);
    conversao+=(numero%10)*pow(2,mult);
    return binario_decimal(numero/10,mult+1,conversao);
} 

int main () {
    int numero,opcao;
    scanf("%d %d",&numero, &opcao);

    if (opcao==1) {
        printf("%d\n" ,decimal_binario(numero,1,0));   
    } else if (opcao==2) {
        printf("%d\n" ,binario_decimal(numero,0,0));
    }
}
