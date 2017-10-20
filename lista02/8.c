/*
* Modularizar o problema 16 da lista 1
*/
#include <stdio.h>

double acrescimo (int horas,int base) { 
    if (horas==0) return 0;
    return ((base*0.00625)+40)*horas;
}

double decrescimo (int dias, int base) { 
    if (dias==0) return 0;
    return base*0.05*dias;
}

int main () {

    int cargo,base,dias,horas;
    double salario;
    scanf("%d %d %d",&cargo,&dias,&horas);
    
    if (cargo==1) base=10000;
    if (cargo==2) base=8000;
    if (cargo==3) base=5000;
    if (cargo==4) base=3000;
    if (cargo==5) base=2000;

    salario=base+acrescimo(horas,base)-decrescimo(dias,base);

    printf("%.2lf\n",salario);
}
