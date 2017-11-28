#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x,ulint y)
{   
    int min,max;
    if (x<y) {
        min=x;
        max=y;
    }
    else {
        min=y;
        max=x;
    }
}

ulint f2(ulint x,ulint y)
{
    int min,max;
    min=y^((x^y)&-(x<y)); //NUMERO MINIMO
    max=x^((x^y)&-(x<y)); //NUMERO MAXIMO
}

int main(void) {
  
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f1(i,i+1);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f2(i,i+1);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  
  return 0;
}
