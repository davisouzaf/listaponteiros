#include <stdio.h>
#include<stdbool.h>
int main()
{
    int i,j,*p,*q;
    //p=i tipos incompatíveis int e ponteiro de int(mas o programa executa).
    //q=&j atribuição legal, endereço de int para ponteiro de int
    //p=&+&i; atribuição ilegal, vai dar erro
    //i = (*&)j; atribuição ilegal
    //i = *&j; atribuição legal, i recebe o conteudo do endereço da variavel j
    //i = *&*&j;atribuição legal, i recebe o valor do conteudo de j
    //q = *p; programa executa, mas os tipos são incompatíveis, tentando atribuir int(conteudo de p) a um ponteiro de int
    //i = (*p)++ + *q; Atribuição legal

}
