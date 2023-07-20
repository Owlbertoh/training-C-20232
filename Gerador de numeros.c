#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int v[50], x;
    srand(time(NULL)); 
    for(x=0;x<50;x++){
        v[x]= 1 + rand() % 200;
        printf("%d- %d -\n", x, v[x]);
    }
    return 0;
}