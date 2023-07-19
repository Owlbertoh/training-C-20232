#include <stdio.h>
/*
Um treino de lógica aleatório, vai dar a sequência abaixo:
I-1 J-7
I-1 J-6
I-1 J-5
I-2 J-8
I-2 J-7
I-2 J-6
I-3 J-9
I-3 J-8
...
 */
int main(){
int I, y;
for(I=1;I<=5;I++){
    for(y=1;y<=3;y++){
    switch (y)
    {
    case 1:
        printf("I-%d ", I);
        printf("J-%d\n", I+6);
        break;
    case 2:
        printf("I-%d ", I);
        printf("J-%d\n", I+5);
        break;
    case 3:
        printf("I-%d ", I);
        printf("J-%d\n", I+4);
        break;
    }
    }
} 
    return 0;
}