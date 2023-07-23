#include <stdio.h>
#include <time.h>
/*
1- Mostrar uma matriz de 5x5
2- Calcular a soma das colunas e das linhas
3- Soma de todos os elementos da matriz
*/
void main () {
    int matriz1[5][5] = {0}, x, y, z = 1, soma_da_matriz1 = 0;
    int numsoma_linha [5][2] = {0}, numsoma_coluna[5][2] = {0};
    srand(time(NULL));
    //Atribuição de valores para a matriz
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            matriz1[x][y] = 1 + rand() % 10;
        }
    }
    //Print da matriz
    printf("A matriz1: \n");
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
            printf("%2d  ", matriz1[x][y]);
        }
        printf("\n");
    }
    //Soma da matriz
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
        soma_da_matriz1 = soma_da_matriz1 + matriz1[x][y];
        }
    }
    printf("Soma da Matriz : %d\n", soma_da_matriz1);
    //Soma das linhas matriz
    for(x=0;x<5;x++){
        for(y=0;y<5;y++){
        numsoma_linha [x][0] = numsoma_linha [x][0] + matriz1[x][y] ;   
        }
    }
    for(x=0;x<5;x++){
        numsoma_linha [x][1] = z;
        z++; 
    }
    //Mostrar a tabela com a soma das linha e o numero da linha
     printf("Tabela com a soma de todas as linhas e o numero da linha:\n");
    for(x=0;x<5;x++){
        for(y=0;y<2;y++){
            printf("%d ", numsoma_linha [x][y]);
        }
    printf("\n");   
    }
    //Soma das colunas
    for(y=0;y<5;y++){
        for(x=0;x<5;x++){
        numsoma_coluna[y][0] = numsoma_coluna[y][0] + matriz1[x][y];    
        }
    }
    z = 1;
    for(x=0;x<5;x++){
        numsoma_coluna[x][1] = z;
        z++; 
    }
    //Printf da soma das colunas
    printf("\nSoma das colunas : \n");

    for(x=0;x<5;x++){
        for(y=0;y<2;y++){
    printf("%d ", numsoma_coluna[x][y] );
        }
    printf("\n");
    } 
}