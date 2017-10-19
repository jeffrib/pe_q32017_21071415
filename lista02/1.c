/*
* Receber um valor e retornar 0 se par e 1 se impar.
*/

#include <stdio.h>

/*
* Função para intdicar se numero é par ou impar
*/
int par_impar(int n) {
    if (n%2==0) return 0;
    return 1;
} 

int main() {
    int n;
    scanf("%d",&n);

    printf ("%d \n", par_impar(n));

}
