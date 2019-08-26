#include <stdio.h>
#include<stdlib.h>

void somavetores(int x[],int y[],int soma[],int n){
    int i;
    for (i=0;i<n;i++) {
        soma[i]=x[i]+y[i];
    }
}

int main(void){
    int n;
    printf("Digite a quantidade de elementos nos vetores:\n");
    scanf("%d",&n);
    printf("\n");
    int *x;
    int *y;
    int *soma;
    x=(int*)malloc(n*sizeof (int));
    y=(int*)malloc(n*sizeof (int));
    soma=(int*)malloc(n*sizeof (int));
    printf("Preencha o primeiro vetor:\n");
    int i;
    for (i=0;i<n;i++) {
        printf("Digite um numero:\n");
        scanf("%d",&x[i]);
    }
    printf("Preencha o segundo vetor:\n");
    for (i=0;i<n;i++) {
        printf("Digite um numero:\n");
        scanf("%d",&y[i]);
    }
    somavetores(x,y,soma,n);
    for (i=0;i<n;i++) {
        printf("%d ",soma[i]);
    }
    return 0;
}
