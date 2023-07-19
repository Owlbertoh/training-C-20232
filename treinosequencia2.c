#include <stdio.h>
/* O output são números de 1 até um número f, com i sendo a quantidade de número por linha.
exercício básico pra facul!
entrada: 4  300
saída:
1 2 3 4     
5 6 7 8  
.....
293 294 295 296
297 298 299 300
*/
int main(){
    int x=1, y, i, f;
    scanf("%d %d", &i, &f);
    do{
        for(y=1;y<=i;y++){
            printf("%d ", x);
            x++;
            if(x>f){
                break;
            }
        }
        printf("\n");
    }while(x <= f);
    
    return 0;    
}