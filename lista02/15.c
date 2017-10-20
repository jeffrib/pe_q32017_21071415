/*
* Resolver a Torre de Hanoi
*/
#include <stdio.h>
/*
* Função para fazer a troca dos discos
*/
char torre (int discos,char A, char B, char C) { 
    if (discos==1) printf("%c-%c ", A, C);
    else
    {
        torre(discos-1,A,C,B);
        printf("%c-%c ", A, C);

        torre(discos-1,B,A,C);
    }
}

int main () {
    int discos;
    scanf ("%d", &discos);
    torre(discos,'A','B','C');
    printf("\n");
}
