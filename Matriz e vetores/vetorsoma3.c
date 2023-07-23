#include <stdio.h>
#include <time.h>

void main (){
    int a[30], b[30], c[30], x;
    srand(time(NULL));
    for(x=0;x<30;x++){
        a[x]= rand() % 20;
        b[x]= 20 + rand()  % 50;
        c[x]= a[x] + b[x];
    }
    for(x=0;x<30;x++){
        printf("Vetor 1: %2d  Vetor 2: %2d  Vetor 3: %2d\n", a[x], b[x], c[x]);
    }

}