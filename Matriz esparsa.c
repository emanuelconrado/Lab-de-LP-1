#include <stdio.h>

int main (){

    int m, n;
    int i, j;

    /*e is Matrix size*/
    float zeros = 0, e;
    scanf("%d%d", &m, &n);

    int matriz[m][n];

    /*Building Matrix*/
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    /*Calculating how much zeros are in the Matrix*/
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(matriz[i][j] == 0){
                zeros++;
            }
        }
    }
    
    e = m*n;

    if(zeros/e > 0.70){
        printf("A matriz é esparsa");
    }else{
        printf("A matriz não é esparsa");
    }

    return 0;
}