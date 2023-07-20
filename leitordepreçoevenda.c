#include <stdio.h>
#include <time.h>
/*
Lendo valores e quantidades de produtos(ou gerando) e entregando o salario do vendedor deles 
e tambem os produtos mais vendidos.
Ele ganha 1100 mais 5% do valor das vendas
*/
int  main (){
    int x, quantidade[10]= {0},  maiorquantidade = 0;
    float preco[10] = {0}, preco_total = 0;
    float salario_do_vendedor;
    srand(time(NULL));
    for(x=0;x<10;x++){
        //printf("Digite o preco de um produto : ");  Se quiser perguntar e  escrever o valor.
        //scanf("%f", &preco[x]);
        preco[x] = 100 + rand() % 3000;
        //printf("Digite a quantidade que vc quer comprar : ");  Se quiser perguntar e escrever a quantidade.
        //scanf("%d", &quantidade[x]);
        quantidade[x] = 1 + rand() % 5;
    }
    printf("\n");
    for(x=0;x<10;x++){
        preco_total = preco_total + preco[x] * quantidade[x];
    }
    for(x=0;x<10;x++){
        printf("preco produto %d : %.2f $  ", (x+1), preco[x]);
        printf("quantidade produto %d : %2d\n", (x+1), quantidade[x]);
    }
    salario_do_vendedor = (0.05 * preco_total) + 1100;
    printf("O vendedor ganha cinco porcento das comissoes e ele tem 1100 $ minimo ao mes");
    printf("\nValor de todos os produtos: %.2f", preco_total);
    printf("\nSalario total do vendedor com os produtos : %.2f", salario_do_vendedor);
    for(x=0;x<10;x++){
        if(quantidade[x]>maiorquantidade)
            maiorquantidade = quantidade[x];
    }
    printf("\nO(s) produto(s) mais vendido tiveram %d vendas\n", maiorquantidade);
    for(x=0;x<10;x++){
        if(quantidade[x] == maiorquantidade){
        printf("Sendo eles na... \n Posicao: %d e Valor: %.2f $\n", (x+1), preco[x]);
        }
    }
    return 0;
}