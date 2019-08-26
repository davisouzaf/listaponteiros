#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i=3,j=5;
    int *p,*q;
    p=&i;
    q=&j;
    printf("valor de p==&i: %d \n",p==&i);//retorna 1 para verdadeiro e 0 para falso. Como é verdadeiro, retornou 1
    printf("valor de *p-*q: %d \n",*p-*q);//retorna o conteúdo de p menos o conteúdo de q(3-5=-2)
    printf("Valor de **&p:%d \n",**&p);// retorna conteúdo do conteúdo do endereço do ponteiro p, ou seja, o valor de i
    printf("valor de 3- *p/(*q)+7:%d \n",3- *p/(*q)+7 );// retorna a parte inteira da operação
}
