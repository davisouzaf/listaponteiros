#include <stdio.h>

int main(){
    int mat[4], *p, x;
    p = mat + 1;
    p = mat++;
    p = ++mat;
    x = (*mat)++;
    /*as expressões válidas são a primeira e a quarta.
    ->na primeira o ponteiro p irá receber o endereço da primeira posicao de mat
    ->na segunda e na terceira, o compilador nao pode incrementar valor de tipo int[]
    -> na quarta, a variavel x recebe o conteudo que se encontra no endereco da primeira posicao de mat e soma 1.
    */

    return 0;
}
