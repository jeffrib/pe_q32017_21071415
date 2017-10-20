/*
* Realizar conversão de temperaturas e numero binario/decimal ou contrario
*/
#include <stdio.h>
#include <math.h>

/*
* Funções para converter de celsius para fahrenheit ou kelvin
*/
float celsius_fahrenheit (float valor) { 
    return (valor*9/5)+32;
} 
float celsius_kelvin (float valor) { 
    return 273.15+valor;
}
/*
* Funções para converter de fahrenheit para celsius ou kelvin
*/
float fahrenheit_celsius (float valor) { 
    return (valor-32.0)*(5.0/9.0);
}

float fahrenheit_kelvin (float valor) { 
    return 273.15+((valor-32.0)*(5.0/9.0));
}
/*
* Funções para converter de kelvin para celsius ou fahrenheit
*/
float kelvin_celsius(float valor) { 
    return valor-273.15;
}
float kelvin_fahrenheit (float valor) { 
    return (valor-273.15)*(1.8)+32;
}
/*
* Converter de decimal para binario ou de binario para decimal
*/
int decimal_binario (int valor,int mult, int conversao) { 
    if (valor==1) return conversao+mult;
    conversao+=((valor%2)*mult);
    return decimal_binario(valor/2,mult*10,conversao);
} 

int binario_decimal (int valor,int mult, int conversao) { 
    if (valor==1) return conversao+pow(2,mult);
    conversao+=(valor%10)*pow(2,mult);
    return binario_decimal(valor/10,mult+1,conversao);
}


int main () {
    int tipo,unidade_entrada,unidade_saida;
    float valor;
    scanf("%d %d %d %f",&tipo,&unidade_entrada,&unidade_saida, &valor);
/*
* Opção de converter temperatura
*/
    if (tipo==1) 
    {
        if (unidade_entrada==1 && unidade_saida==2) {
            printf("%.2f F\n",celsius_fahrenheit(valor));
        } else if (unidade_entrada==1 && unidade_saida==3) {
            printf("%.2f K\n",celsius_kelvin(valor));
        } else if (unidade_entrada==2 && unidade_saida==1) {
            printf("%.2f C\n",fahrenheit_celsius(valor));
        } else if (unidade_entrada==2 && unidade_saida==3) {
             printf("%.2f K\n",fahrenheit_kelvin(valor));
        } else if (unidade_entrada==3 && unidade_saida==1) {
            printf("%.2f C\n",kelvin_celsius(valor));
        } else if (unidade_entrada=3 && unidade_saida==2) {
            printf("%.2f F\n",kelvin_fahrenheit(valor));
        }
/*
* Opção de converter decimal/binario
*/       
    } else if (tipo==2) {
        if (unidade_entrada==1) {
            printf("%d\n" ,decimal_binario(valor,1,0));
        } else if(unidade_entrada==2) {
            printf("%d\n" ,binario_decimal(valor,0,0));
        }
    }

}
