#include <stdio.h>
#include <time.h>

void main (){
    int a[21], x, y, aux;
    for(x=1;x<21;x++)
        a[x]= rand() % 20;
     for(x=1;x<21;x++)
        printf("%2d ", a[x]);
    printf("\n");    
    for(x=1;x<21;x++){
        for(y=x+1;y<21;y++){
            aux = a[x];
            a[x] = a[y];
            a[y] = aux;
        }
    }
    for(x=1;x<21;x++)
        printf("%2d ", a[x]);
}