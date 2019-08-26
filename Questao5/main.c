#include<stdio.h>

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);//imprimiu o que se esperava, que era o valor

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);//primeiro o ponteiro recebeu o endereço de temp, ao alterar o valor que está nesse endereço, alterou o valor na variável temp.

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);//aux recebeu o conteudo de p3, que é o primeiro valor no vetor(P).

  /* (d) */
  p3 = &nome[4];
  aux = *p3;// aux recebeu o conteudo de pe, que é o valor na quinta posicao do vetor(e).
  printf("%c \n", aux);

  /* (e) */
  p3 = nome;//p3 contém o endereço da primeira posicao de "nome", assim, imprimiu o valor da primeira posicao ao chamar printf usando *p3
  printf("%c \n", *p3);

  /* (f) */
  p3 = p3 + 4;//p3 incrementa 4, assim o conteúdo passa a ser o endereço da quinta posicao do vetor.
  printf("%c \n", *p3);

  /* (g) */
  p3--;// ao decrementar 1, o conteúdo passa a ser o endereço da quarta posicao do vetor
  printf("%c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;//p4 recebeu o endereço do vetor, idade recebeu o conteudo do endereço que p4 aponta(primeira posicao do vetor) e imprime o valor na tela
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;//imprime a sgunda posicao do vetor
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;//imprime a terceira posicao
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 - 2;//p4 decrementa dois, assim, imprime a primeira posicao
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;//p5 recebe o endereco da terceira posicao decrementado 1, assim, recebe o endereço da segunda posicao
  printf("%d \n", *p5);

  /* (n) */
  p5++;//incrementa em 1 o endereco de p5, assim imprime o valor da terceira posicao do vetor
  printf("%d \n", *p5);
  return(0);
}

