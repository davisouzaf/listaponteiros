#include <stdio.h>



int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;//f recebe o endereço da primeira posicao do vetor vet
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i);//mostra os índices 'i'
    printf("vet[%d] = %.1f ",i, vet[i]);//mostra os valores contidos no vetor
    printf("*(f + %d) = %.1f ",i, *(f+i));//mostra os valores contidos nos endereços de f+i
    printf("&vet[%d] = %X ",i, &vet[i]);//mostra o endereço de vet na posicao 'i' no formato hexadecimal maiusculo
    printf("(f + %d) = %X ",i, f+i);//mostra os enderecos de f+i
  }
}


