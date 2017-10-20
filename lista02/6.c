/*
* Raizes de uma equação do segundo grau
*/
#include <stdio.h>
#include <math.h>
/*
* Valor de x1
*/
double x1 (double a, double b, double c,double delta) { 
    if (delta>=0.0) return (-b+sqrt(delta))/(2*a);
} 
/*
* Valor de x2
*/
double x2 (double a, double b, double c,double delta) { 
    if (delta>=0.0) return (-b-sqrt(delta))/(2*a);

} 


int main () {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double real=-b/(2*a);
    double delta=pow(b,2)-(4*a*c);

    if (delta>=0) {
        printf("%.2lf %.2lf\n" ,x2(a,b,c,delta),x1(a,b,c,delta));
    } else {
        delta=sqrt(-delta);
        delta/=(2*a);
        printf("%.2lf - %.2lfi %.2lf + %.2lfi\n" ,real,delta,real,delta);   
    }
}
