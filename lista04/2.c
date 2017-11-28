/*
*   Calcular a diferença entre duas medições de tempo
*/

#include <stdio.h>
/*
*   Estrutura das variaveis tempo
*/

struct tempo 
{
    int min;
    int seg;
    int dec;
}t1,t2,t3;

/*
*   Função para calcular a diferença (t2-t1);
*/

void diferenca (struct tempo t1, struct tempo t2,struct tempo t3)
{
    if (t2.dec<t1.dec) {
        t2.dec+=100;
        (t2.seg)--;
    }
    if (t2.seg<t1.seg) {
        t2.seg+=60;
        (t2.min)--;
    }
    
    t3.min=(t2.min)-(t1.min);
    t3.seg=(t2.seg)-(t1.seg);
    t3.dec=(t2.dec)-(t1.dec);
    
    printf("%dm %ds %d\n",(t3.min), (t3.seg), (t3.dec));
}

int main ()
{
    scanf("%dm %ds %d" , &(t1.min), &(t1.seg), &(t1.dec));
    scanf("%dm %ds %d" , &(t2.min), &(t2.seg), &(t2.dec));
    
    diferenca(t1,t2,t3);
}
