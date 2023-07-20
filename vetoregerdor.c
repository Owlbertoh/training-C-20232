#include <stdio.h>
#include <time.h>
#include <math.h>


void main (){
    int v[10], b[10];
    srand(time(NULL));
    for(int x = 0;x<10;x++){
        v[x] = rand() % 40;
        b[x] = v[x] * v[x];
    }
    for(int x = 0;x<10;x++){
        printf(" %4d", v[x]);
    }
    printf("\n\n");
    for(int x = 0;x<10;x++){
        printf(" %4d", b[x]);
    }
}