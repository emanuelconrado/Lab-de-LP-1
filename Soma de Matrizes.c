#include<stdio.h>

int main(){
    int m, n;
    int i, j;
    scanf("%d%d", &m, &n);

    int matriz1[m][n];
    int matriz2[m][n];
    int matrizSoma[m][n];

    /*Building Matrix 1*/
    for(i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    /*Building Matrix 2*/
    for(i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    /*Matrix Addition*/
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
             matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    /*Printing Matrix Addition*/
    for(i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d ", matrizSoma[i][j]);
        }
        puts("");
    }

    return 0;
}