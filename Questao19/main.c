#include <stdio.h>
#include<stdlib.h>

void multiplicamatriz(int **a,int **b,int **c, int la, int ca, int cb){
    int i,j,k;
    for (i=0;i<la;i++) {
        for (j=0;j<cb;j++) {
            c[i][j]=0;
            for (k=0;k<ca;k++) {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
}



int main(void){
    int la,ca,cb;//'ca' eh tambem o numero de linhas de b
    printf("Digite o numero de linhas de A:\n");
    scanf("%d",&la);
    printf("digite o numero de colunas de A:\n");
    scanf("%d",&ca);
    printf("digite o numero de colunas de B:\n");
    scanf("%d",&cb);
    int **a;
    int **b;
    int **c;
    int i,j;
    a = (int**) malloc(la*sizeof(int*));
    b = (int**) malloc(ca*sizeof(int*));
    c=(int**) malloc(la*sizeof (int*));
    a[0] = malloc(ca*la*sizeof(int));
    b[0] = malloc(cb*ca*sizeof(int));
    c[0] = malloc(la*cb*sizeof(int));
    //ajuste dos endereços
    for(i=1; i<la; i++){
        a[i] = a[i-1] + ca;
    }
    for (i=1;i<ca;i++) {
        b[i]=b[i-1]+cb;
    }
    for (i=1;i<la;i++) {
        c[i]=c[i-1]+cb;
    }

    printf("Preencha a matriz A:\n");
    for (i=0;i<la;i++) {
        for(j=0;j<ca;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Preencha a matriz B:\n");
    for (i=0;i<ca;i++) {
        for(j=0;j<cb;j++){
            scanf("%d",&b[i][j]);
        }
    }
    multiplicamatriz(a,b,c,la,ca,cb);
    for (i=0;i<la;i++) {
        for (j=0;j<cb;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
