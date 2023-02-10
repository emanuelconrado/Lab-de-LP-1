#include <stdio.h>

int main (){
    int a;

    while(1){

    printf("1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n");
    scanf("%d", &a);


    if(a == 1){
        puts("Item 1");
    }else if(a == 2){
        puts("Item 2");
    }else if(a == 3){
        puts("Item 3");
    }else if(a == 4){
        puts("Sair");
        break; 
    }else{
        printf("Opcao %d Invalida\n", a);
    }
    }
    
    return 0;

}