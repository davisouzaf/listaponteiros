#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int values1[] = { 40, 10, 100, 90, 20, 25 ,50,35,60,85,35,63,95,84,36,52,96,52,32,32,63,52,96,85,74,25,32,26,28,95};
int values2[] = { 40, 10, 100, 90, 20, 25 ,50,35,60,85,35,63,95,84,36,52,96,52,32,32,63,52,96,85,74,25,32,26,28,95};
int compare (int a,int b){ //função de comparação que irá retornar -1 se a<b, 1 se >b ou 0 se a==b
    if(a>=b){
        return 1;
    }else {
        return 0;
    }
}

typedef int(*comparacao)(int,int);

int comparar (const void *a, const void *b){
  return ( *(int*)a - *(int*)b );
}
void ordena(int n, int v[],comparacao comp){
    int i;int j;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (comp(v[j],v[i])){
                float aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
int main(){
    clock_t t;
    t=clock();
    ordena(30,values1,compare);
    t=clock()-t;
    printf("tempo com a funcao comparacao : %f segundos\n",((double)t)/CLOCKS_PER_SEC);
    t=clock();
    qsort (values2, 30, sizeof(int), compare);
    t=clock()-t;
    printf("tempo com a funcao qsort: %f\n",((double)t)/CLOCKS_PER_SEC);
    return 0;
}
