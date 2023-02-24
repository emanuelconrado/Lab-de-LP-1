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
    double porcentagem;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i].numero);
        gets(lixo);
        gets(vetor[i].nome);  
    }

    while(j > 0){
        scanf("%d", &j);

        for(i = 0; i < n; i++){
            if(j == vetor[i].numero){
                vetor[i].votos = vetor[i].votos + 1;
                validos++;
        }

        total++;
    }
    }
    nulos = total - validos;
    total = total - 1;

    /*Printar os votos, o numero, o nome e votos nulos*/

    porcentagem = 3.14;

    printf("%lf", 3.14);

 
    return 0;
}