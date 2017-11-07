/*
*  Receber uma String e Contar numero de vogais
*/ 

#include <stdio.h>

/*
*  Contar as vogais
*/ 
int contar_vogais(char *entrada)
{
    int i=0,num=0;
	char vogais[10] = "aeiouAEIOU";

	while (*entrada)
	{
		for (i=0; i<10; i++)
			if (vogais[i] == *entrada)
				num++;
		entrada++;
	}
	return num;
}	

int main ()
{
    char entrada[255];
    int i=0;
    fgets (entrada,255,stdin);
    printf("%d\n",contar_vogais(entrada));
}
