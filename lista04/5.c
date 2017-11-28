#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
    unsigned int count = 1;
    if (x==1) return 1;
    
    while(x>1){
        if(x%2==1){
            count++;
        }
        x/=2;
    }
    return count;
}

ulint f2(ulint x)
{
    unsigned int count = 0;
    while (x)
    {
      x&=(x-1) ;
      count++;
    }
    return count;
}

int main(void) {
  
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  
  tempo_init = clock();
  for (int i=0; i<100000000; i++) {
    soma += f1(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
  
  tempo_init = clock();
  for (int i=0; i<100000000; i++) {
    soma += f2(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  
  return 0;
}
