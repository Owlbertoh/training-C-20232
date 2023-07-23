#include <stdio.h>
#include <time.h>
//Trabalhando com diagonais não principais de uma matriz
void main() {
    int l, c, tamanho = 40 ;
    int matriz1[tamanho][tamanho];
    srand(time(NULL));
    //Atribuindo valores na matriz1
    for(l=0;l<tamanho;l++){
        for(c=0;c<tamanho;c++){

        
        matriz1[l][c]= rand() % 10;  
        }
    }
    //Imprimindo a matriz1
     printf("Matriz1: \n");
    for(l=0;l<tamanho;l++){
        for(c=0;c<tamanho;c++){
            printf("%d ", matriz1[l][c]);    
        }
        printf("\n");
    }
    //Imprimindo diagonais terciarias superiores sem o [0][9]
     printf("\nDiagonais terciarias superiores sem o [0][9]: \n");
    for(l=0;l<tamanho;l++){
        for(c=0;c<tamanho;c++){
            if(c > l && c != l+(tamanho-1)){
                printf("%d ", matriz1[l][c]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    //Imprimindo diagonais terciarias inferiores sem o [9][0]
    printf("\nDiagonais terciarias inferiores sem o [9][0]: \n");
    for(l=0;l<tamanho;l++){
        for(c=0;c<tamanho;c++){
            if(c < l && l != c+(tamanho-1)){
                printf("%d ", matriz1[l][c]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }


}