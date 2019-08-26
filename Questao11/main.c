#include <stdio.h>

int main()
{
    char x[4];
    printf("x+2 %p\n",x+1);
    printf("x+3 %p\n",x+2);
    printf("x+4 %p\n",x+3);
    float y[4];
    printf("y+1 %p\n",y+1);
    printf("y+2 %p\n",y+2);
    printf("y+3 %p\n",y+3);
    int z[4];
    printf("z+1 %p\n",z+1);
    printf("z+2 %p\n",z+2);
    printf("z+3 %p\n",z+3);
    double w[4];
    printf("w+1 %p\n",w+1);
    printf("w+2 %p\n",w+2);
    printf("w+3 %p\n",w+3);
   /*
    Os valores nirão sempre somando com a quantidade de bytes do tipo da variável.
    O que pôde ser bservado é que as variáveis do tipo int possuem 4 bytes,
    e não 2 bytes como dito no enunciado
    */
    return 0;
}
