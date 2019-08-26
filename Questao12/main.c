#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;



    aloha[2] = value;   //expressão válida
    scanf("%f", &aloha);    //expressão válida(irá compilar), mas o resultado de &aloha não fará sentido pois está tentado ler um float
    aloha = value; //expressão inválida, o endereço de aloha nao pode receber um valor float numerico
     printf("%f", &aloha); //expressão valida(irá compilar), mas o resultado não iŕa exibir o valor do endereço de aloha

    coisas[4][4] = aloha[3];//expressão válida
    coisas[5] = aloha;//expressão inválida, coisas[5] não pode receber o endereço de aloha(endereço da primeira posicao)
    pf = value;//expressão inválida, pois os tipos são incompatíveis, o ponteiro pf não recebe um float(value)
    pf = aloha;//expressão válida, pf recebe o valor do endereço de aloha.


    return 0;
}
