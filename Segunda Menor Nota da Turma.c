#include <stdio.h>

int main(){
int N, x, aux, y = 0, cont=0, j, u=0;
scanf("%d", &N);
int v[N];
for(x=0;x<N;x++)
    scanf(" %d", &v[x]);
for(x=0;x<N;x++){
    if(v[x] < 0){
        cont++;
    }
}
j = N - cont;
int g[j];
for(x=0;x<N;x++){
    if(v[x]>=0 && v[x]<=10){
        g[u]=v[x];
        u++;
    }
}

for(x=0;x<j;x++){
        for(y=x+1;y<j;y++){
            if(g[x]>g[y]){
                aux = g[x];
                g[x] = g[y];
                g[y] = aux;
            }
        }
    }
for(x=0;x<j;x++){
    if(g[x]<g[x+1]){
        printf("%d", g[x+1]);
        break;
    }
}
    
return 0;
}