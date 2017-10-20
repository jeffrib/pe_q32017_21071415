/*
* Calculadora para realizar operações basicas
*/
#include <stdio.h>
#include <math.h>

/*
* Realizar soma
*/
float soma (float x, float y) { 
    return x+y;
} 
/*
* Realizar subtração
*/
float subtracao (float x, float y) { 
    return x-y;
} 
 /*
* Realizar multiplicação
*/  
float multiplicacao (float x, float y) { 
    return x*y;
}  
/*
* Realizar divisão
*/
float divisao (float x, float y) { 
    return (x/y);
} 
/*
* Realizar potenciação
*/
float potenciacao (float x, float y) { 
    return pow(x,y);
} 

int main () {
    int opcao;
    float x,y;
    scanf("%d %f %f" ,&opcao,&x,&y);

    if (opcao==1) { 
        printf("%.2f\n",soma(x,y));
    } else if (opcao==2) {
        printf("%.2f\n",subtracao(x,y));
    } else if (opcao==3) {
        printf("%.2f\n",multiplicacao(x,y));
    } else if (opcao==4) {
        printf("%.2f\n",divisao(x,y));
    } else if (opcao==5) {
        printf("%.2f\n",potenciacao(x,y));
    }
}
