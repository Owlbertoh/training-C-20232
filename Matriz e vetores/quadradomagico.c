#include <stdio.h>
#include <time.h>
// Fazendo um quadrado magico
void main () {
    int  l, c, tamL=3, tamC=3;
    int  somat, soma, erro = 0;
    int  mat[3][3] = {6, 7, 2, 1, 5, 9, 8, 3, 0};
    soma = 0;
    for(l=0;l<tamL;l++){          
       soma += mat[l][l];
    }
    printf("Soma da lateral principal: %d\n", soma);
    somat = soma;
    soma = 0;
    for(l=0;l<tamL;l++){          
       soma += mat[l][tamL - 1 - l];
    }
    printf("Soma da lateral secundaria: %d\n", soma);
    if (somat != soma){
        printf("Soma da lateral eh diferente\n");
        erro = 1;
    }
    for(l=0;l<tamL;l++){
        soma = 0;
        for(c=0;c<tamC;c++){
            soma += mat[l][c];
        }
        printf("Soma da linha %d eh: %d\n", l, soma);
        if(soma != somat){
            printf("Soma da linha %d eh diferente\n", l);
            erro = 1;
        }
    }
     for(c=0;c<tamL;c++){
        soma = 0;
        for(l=0;l<tamC;l++){
            soma += mat[l][c];
        }
        printf("Soma da coluna %d eh: %d\n", c, soma);
        if(soma != somat){
            printf("Soma da coluna %d eh diferente\n", c);
            erro = 1;
        }
    }
    if(erro == 0 ){
        printf("Eh um quadrado perfeito!\n");
    }
    else{
        printf("Nao eh um quadrado perfeito!\n");
    }
}