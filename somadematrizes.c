#include <stdio.h>
#include <time.h>

void main(){
    int matriz1[10][10], matriz2[10][10], matriz3[10][10], x, y;
    srand(time(NULL));
    //Atribuição de valores para as matrizes 
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
            matriz1[x][y] = 1 + rand() % 50;
            matriz2[x][y] = 51 + rand() % 150;
            matriz3[x][y] = matriz1[x][y] + matriz2[x][y];
        }
    }
    //Print da matriz1
    printf("Matriz1 :\n");
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
        printf("%3d ", matriz1[x][y]);
        }
    printf("\n");
    }
    //Print da matriz2
    printf("Matriz2 :\n");
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
        printf("%3d ", matriz2[x][y]);
        }
    printf("\n");
    }
    //Print da matriz3
    printf("Matriz3 :\n");
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
        printf("%3d ", matriz3[x][y]);
        }
    printf("\n");
    }
}