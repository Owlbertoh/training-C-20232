#include <stdio.h>
#include <time.h>
#include <string.h>
//Treinando string

void main () {
    //Declaração de variaveis e tipos primitivos
    char string1[50], string2[50];
    int  l;
    // Pedindo pra escrever as duas strings 
    printf("Escreva a primeira string: ");
    fgets(string1, 50, stdin);
    printf("Escreva a primeira string: ");
    fgets(string2, 50, stdin);
    //Vendo o tamanho delas
    /*printf("String1: \n");
    for(l=0;l<50;l++){
        printf("Int: %d , Char: %c e tamanho: %d\n", string1[l], string1[l], strlen(string1));
    }
    printf("String2: \n");
    for(l=0;l<50;l++){
    printf("Int: %d, Char: %c e tamanho: %d\n", string2[l], string2[l], strlen(string2));
    }*/
    //Tirando o '\n'
    l = 0;
    while(string1[l] != '\0'){
        if(string1[l] == '\n'){
            string1[l] = ' ';
        }
        l++;
    }
    l = 0;
    while(string2[l] != '\0'){
        if(string2[l] == '\n'){
            string2[l] = '\0';
        }
        l++;
    }
    //Print de tudo sem o '\n'
    printf("\n\tString 1 : %s", string1);
    printf("\n\tString 2 : %s", string2);
    //Concanetação
    strcat(string1, string2);
    printf("\n\tString : %s", string1);

}