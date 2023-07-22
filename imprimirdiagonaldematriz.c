#include <stdio.h>
#include <time.h>


void main() {
    int l, c, x= 10;
    int matriz1[x][x];
     printf("Matriz1 :\n");
     //Atibuição de Valores a matriz1
    for(l=0;l<x;l++){
        for(c=0;c<x;c++){
        matriz1[l][c] = rand() % 999 ;
        }
    }
    //Print da matriz1 
    for(l=0;l<x;l++){
        for(c=0;c<x;c++){
            printf("%3d  ", matriz1[l][c]);
        }
        printf("\n");
    }
    //Print da diagonal principal da matriz1
    printf("Diagonal principal da Matriz1 :\n\n");
    for(l=0;l<x;l++){
        for(c=0;c<x;c++){
            if(c == l){
            printf("%d ", matriz1[l][c]);
            }
            else{
                printf("     ");
            }
        }
    printf("\n");
    }
    //Print da diagonal principal da matriz1
    printf("Diagonal principal da Matriz1 :\n\n");
    for(l=0;l<x;l++){
        printf("%3d ", matriz1[l][l]);
    }
    //Print da diagonal secundaria
    printf("\nDiagonal secundaria da Matriz1 :\n\n");
    for(l=0;l<x;l++){
        c = x - 1 - l;
         printf("%3d  ", matriz1[l][c]);
    }
    printf("\nDiagonal secundaria da Matriz1 :\n\n");
    for(l=0;l<x;l++){
        for(c=0;c<x;c++){
            if( c + l == x - 1){
            printf("%d ", matriz1[l][c]);
            }
            else{
                printf("     ");
            }
        }
    printf("\n");
    }

}