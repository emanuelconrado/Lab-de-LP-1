#include <stdio.h>
#include <math.h>

typedef struct Ponto
{
    int x;
    int y;
}Tponto; Tponto ponto[100];

int main(){
    int n, i;
    float menor;
    float distance;
    int x, y;

    scanf("%d", &ponto[0].x);
    scanf("%d", &ponto[0].y);

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &ponto[i+1].x);
        scanf("%d", &ponto[i+1].y);
    }

    menor = sqrt(pow(ponto[1].x - ponto[0].x, 2) + pow(ponto[1].y - ponto[0].y, 2));
    x = ponto[1].x;
    y = ponto[1].y;

    for(i = 1; i <= n; i++){
        distance = sqrt(pow(ponto[i].x - ponto[0].x, 2) + pow(ponto[i].y - ponto[0].y, 2));

        if(distance < menor){
            menor = distance;
            x = ponto[i].x;
            y = ponto[i].y;
        }
    }

    printf("Ponto mais perto é (%d, %d)",x, y);

    return 0;
}