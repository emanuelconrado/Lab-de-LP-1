#include <stdio.h>

typedef struct Jogadores
{
    char nome[100];
    int idade;
    int chutes;
    int gols;
}Tjogadores;


int main(){
    Tjogadores j1, j2;
    char lixo[100];


    gets(j1.nome);
    scanf("%d", &j1.idade);
    scanf("%d", &j1.chutes);
    scanf("%d", &j1.gols);
    
    gets(lixo);

    gets(j2.nome);
    scanf("%d", &j2.idade);
    scanf("%d", &j2.chutes);
    scanf("%d", &j2.gols);

    

    if(j1.chutes/j1.gols < j2.chutes/j2.gols){
        printf("%s (%d)", j1.nome, j1.idade);
    }else{
        printf("%s (%d)", j2.nome, j2.idade);
    }

    return 0;
}