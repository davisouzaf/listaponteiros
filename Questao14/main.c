#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void ordenaVetor(int n, float v[]){
    int i;int j;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (v[i]<v[j]){
                float aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

int main(){
    int n;
    printf("digite a quantidade de valores");
    scanf("%d",&n);
    printf("\n");
    float *x;
    x=(float*) malloc(n*sizeof(float));
    int i;
    for (i=0;i<n;i++) {
       printf("Digite um numero: \n" );
       scanf("%f",&x[i]);
    }
    printf("\n");
    ordenaVetor(n,x);
    for (i=0;i<n;i++) {
        printf("%f ",x[i]);
    }
    free(x);
    return 0;
}
