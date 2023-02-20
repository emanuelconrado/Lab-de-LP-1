#include <stdio.h>

typedef struct veiculos
{
    char modelo[31];
    char marca[31];
    int ano;
    int preco;
}veiculos; veiculos v[2];



int main(){
    int i;

    for(i = 0; i < 2; i++){
        scanf("%s", v[i].modelo);
        scanf("%s", v[i].marca);
        scanf("%d", &v[i].ano);
        scanf("%d", &v[i].preco);
    }

    if(v[0].ano < v[1].ano){
        printf("%s %s", v[0].marca, v[0].modelo);
    }else if(v[1].ano < v[1].ano){
        printf("%s %s", v[1].marca, v[1].modelo);
    }else{
        if(v[0].preco < v[0].preco){
            printf("%s %s", v[0].marca, v[0].modelo);
        }else{
            printf("%s %s", v[1].marca, v[1].modelo);
        }
    }



    return 0;
}