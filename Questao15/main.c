#include <stdio.h>      /* para utilizar o printf */
#include <stdlib.h>     /* para utilizar o qsort */

int compare (const void *a, const void *b){ //função de comparação que irá retornar -1 se a<b, 1 se a>b ou 0 se a==b
  return ( *(int*)a - *(int*)b );
}

int main (){
    int n;  //quantidade de elementos do vetor
    printf("digite a quantidade de valores");
    scanf("%d",&n);
    printf("\n");
    float *x;
    x=(float*) malloc(n*sizeof(float)); //faz a alocação de x(n*tamanho de float)
    int i;
    for (i=0;i<n;i++) { //preenche o vetor
       printf("Digite um numero: \n" );//mensagem solicitando valor
       scanf("%f",&x[i]);              //leitura do valor
    }
    printf("\n");
  qsort (x, n, sizeof(float), compare);//ordenação do vetor utilizando qsort, com parametros: vetor, quantidade de elementos, tamanho de float e função de comparação
  for (i=0; i<n; i++)   //imprime o vetor ordenado
    printf ("%f ",x[i]);
   free(x);//libera o espaço que guarda x
  return 0;
}
