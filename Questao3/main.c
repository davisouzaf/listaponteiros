#include <stdio.h>

int main()
{
   int i=5,*p;
   p=&i;
   printf("%x %d %d %d %d",p,*p+2,**&p,3**p,**&p+4);// supondo que o endereco de i seja 4094, seria mostrado na tela:"4094  7 15 5 9"
}
