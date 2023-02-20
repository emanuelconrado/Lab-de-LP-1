#include <stdio.h>


typedef struct data
{
    int dia;
    int mes;
    int ano;
}tdata; tdata v[2];

int Func(int d1, int d2){
    if(d1 > d2){
        return 1;
    }else if(d1 == d2){
        return 0;
    }else{
        return -1;
    }
}


int main(){

    int i, d1, d2;

    for(i = 0; i < 2; i++){
        scanf("%d", &v[i].dia);
        scanf("%d", &v[i].mes);
        scanf("%d", &v[i].ano);
    }

    d1 = ((12 - v[0].mes) * 30) + ((2023 - v[0].ano) * 360) - (v[0].dia);
    d2 = ((12 - v[1].mes) * 30) + ((2023 - v[1].ano) * 360) - (v[1].dia);
    
    if(Func(d1, d2) == 1){
        puts("Pessoa 1 é mais velha");
    }else if(Func(d1, d2) == 0){
        puts("Pessoas são da mesma idade");
    }else{
        puts("Pessoa 2 é mais velha");
    }



    return 0;
}