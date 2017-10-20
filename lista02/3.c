/*
* Aproximação do valor pi por Gauss-Legendre
*/
#include <stdio.h>
#include <math.h>

/*
* Função para o calcular o Pi
*/

double pi (int n) { 
    int i;
    double Valorpi,a1;
    double a=1,p=1,t=0.25;
    double b=1/sqrt(2);

/*
* Iterações para retição de sequencias
*/

    for (i=0;i<n;i++) {
        a1=(a+b)/2;
        b=sqrt(a*b);
        t+=-p*pow((a-a1),2);
        p*=2;
        a=a1;
    }

    Valorpi=(a+b);
    Valorpi=pow(Valorpi,2);
    Valorpi/=4*t;
    return Valorpi;
} 

int main () {
    printf("%.20lf \n", pi(10));

}
