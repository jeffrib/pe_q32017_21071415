/*
*   Receber 2 pontos em coordenadas (x,y,z) e calcular a distancia
*/

#include <stdio.h>
#include <math.h>

/*
*   Estrutura das variaveis
*/

struct variaveis 
{
    float x;
    float y;
    float z;
}p1,p2;

/*
*   Função para calcular a distância
*/

float distancia (struct variaveis p1, struct variaveis p2)
{
    float dist;
    dist = pow((p2.x)-(p1.x),2);
    dist += pow((p2.y)-(p1.y),2);
    dist += pow((p2.z)-(p1.z),2);
    dist = sqrt(dist);
    
    return dist;
}

int main ()
{
    scanf("%f %f %f" , &(p1.x), &(p1.y), &(p1.z));
    scanf("%f %f %f" , &(p2.x), &(p2.y), &(p2.z));
    
    printf("%.2f\n",distancia(p1,p2));
}
