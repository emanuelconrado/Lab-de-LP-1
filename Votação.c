#include <stdio.h>

typedef struct Registro
{
    char nome[31];
    int numero;
    int votos;
}tRegistro; tRegistro vetor[10];



int main(){
    char lixo[10];
    int n, i;
    int j = 2;
    int nulos;
    int total = 0;
    int validos = 0;
    float porcentagem;
    int IMaior = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i].numero);
        gets(lixo);
        gets(vetor[i].nome);
        vetor[i].votos = 0;
    }

    while(1){
        scanf("%d", &j);
        if(j <= 0){
            break;
        }

        for(i = 0; i < n; i++){
            if(j == vetor[i].numero){
                vetor[i].votos = vetor[i].votos + 1;
                validos++;
        }

    }
    total++;
    }
    nulos = total - validos;
    
    for(i = 0; i < n; i++){
        if(vetor[i].votos > vetor[IMaior].votos){
            IMaior = i;
        }
    }

    /*Printar os votos, o numero, o nome e votos nulos*/

    for(i = 0; i < n; i++){
        porcentagem = ((vetor[i].votos*1.0)/total)*100;
        printf("%.2f - %d - %s", porcentagem, vetor[i].numero, vetor[i].nome);
        if(i == IMaior){
            printf(" VENCEDOR");
        }
        printf("\n");
        
    }
    
    printf("%.2f - Nulos", ((nulos*1.0/total)*100));

 
    return 0;
}
