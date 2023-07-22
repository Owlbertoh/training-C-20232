#include <stdio.h>
#include <time.h>
//Trabalhando com inversão de matriz
void main() {
    int  tamL = 10, tamC = 5;
    int l, c, mat1[tamL][tamC], mat2[tamC][tamL];
    srand(time(NULL));
    //Atribuição de valores 
    for(l=0;l<tamL;l++){
        for(c=0;c<tamC;c++){
            mat1[l][c] = rand () % 150; 
        }
    }
    for(l=0;l<tamL;l++){
        for(c=0;c<tamC;c++){
            mat2[c][l] = mat1[l][c]; 
        }
    }
    // printf das duas matrizes
    printf("Matriz1: \n");
    for(l=0;l<tamL;l++){
        for(c=0;c<tamC;c++){
            printf("%3d    ", mat1[l][c]);
        }
        printf("\n");
    }
    printf("\nMatriz2: \n");
    for(l=0;l<tamC;l++){
        for(c=0;c<tamL;c++){
            printf("%3d    ", mat2[l][c]);
        }
        printf("\n");
    }









}