#include <stdio.h>
/*
O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução,
qual função será executada, sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
Em geral, a definição de qual função será executada é feita em um outro ponto do código, fazendo o ponteiro apontar para a função desejada.
fonte: https://www.inf.pucrs.br/~pinho/PRGSWB/PonteirosParaFuncoes/PonteirosParaFuncoes.html
*/
int soma(int a, int b) { return a + b; }
int multiplica(int a, int b) { return a * b; }

typedef int (*Operacao)(int,int);

//Executa uma operação binária sobre dois operandos
int opera(int a, int b, Operacao op) {
  return op(a,b);
}

int main() {
  printf("%d\n", opera(3, 4, soma));       //imprime 7
  printf("%d\n", opera(3, 4, multiplica)); //imprime 12
}
