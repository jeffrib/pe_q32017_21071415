/*
*   Ler txt, calcular media dos alunos e criar outro txt com esses dados.
*/
#include <stdio.h>
#include <stdlib.h>

/*
*   Estrutura da ficha dos alunos.
*/
struct ficha 
{
    char nome[100];
    int ra;
    float p1,p2,p3;
}aluno[50];


int main ()
{   
    int i;
    float media[50];    
    
    FILE *fp;
    fp = fopen ("lista_alunos.txt","r");
    
    if (fp == NULL) {
        printf("O arquivo nao encontrasse no diretorio.\n");
        return 0;
    }
/*
*   Ler os dados do txt e calcular a média
*/
    for (i=0; i<50; i++){
        fscanf(fp,"%s %d %f %f %f", aluno[i].nome, &aluno[i].ra, &aluno[i].p1, &aluno[i].p2, &aluno[i].p3);
        media[i]=(aluno[i].p1+aluno[i].p2+aluno[i].p3)/3;
    }
    fclose(fp);
    
/*
*   Criar novo txt com nome, matricula e media.
*/    
    fp = fopen ("media_alunos.txt","w");
 
    for (i=0;i<50;i++)
        fprintf(fp,"%s %04d %.1f %.1f %.1f %.2f\n",aluno[i].nome, aluno[i].ra, aluno[i].p1, aluno[i].p2, aluno[i].p3, media[i]);

    fclose(fp);       
}
