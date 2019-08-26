#include <stdio.h>


int values[] = { 40, 10, 100, 90, 20, 25 };


int compare (int a,int b){ //função de comparação que irá retornar -1 se a<b, 1 se >b ou 0 se a==b
    if(a>=b){
        return 1;
    }
    else {
        return 0;
    }
}

typedef int(*comparacao)(int,int);


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
    int i;
    ordena(6,values,compare);
    for (i=0;i<6;i++) {
        printf("%d ",values[i]);
    }
    return 0;
}
