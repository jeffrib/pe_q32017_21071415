/*
*  Receber uma String e inverte-la
*/ 

#include <stdio.h>

/*
*  Calcular tamanho do vetor
*/ 

int length(char *entrada)
{
    int i=0,tamanho=0;

	while (*entrada!='\0') {
	    tamanho++;
		entrada++;
	}
	return tamanho-2;
}	

int main ()
{
    char entrada[255];
    int i=0;
    fgets (entrada,255,stdin);

    for(i=length(entrada); i>-1; i--) {
        printf("%c",entrada[i]);
    }
    printf("\n");
}
