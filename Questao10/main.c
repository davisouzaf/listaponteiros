#include <stdio.h>

int main(int argc, char *argv[]){
    //supondo endereço de x como sendo 4092
    float x[4];//para tipo char, os endereços(que serao exibidos) vão incrementar em uma unidade pois ocupa 1 byte(char)
    /*
        Assim, se o tipo tiver 2 bytes(o int no encunciado) irá incrementar duas unidade para
        cada vez que somar 1, se tiver 4 bytes(float) ira somar 4 e se tiver 8 bytes(double) ira somar 8.

        Desta forma, se o endereco de x for 4092:
        para um char(1 byte), os endereços serao:
        x+1: 4093
        x+2: 4094
        x+3: 4095
        para int(2 bytes):
        x+1: 4094
        x+2: 4096
        x+3: 4098
        para float(4 bytes):
        x+1: 4096
        x+2: 4100
        x+3: 4104
        para double(8 bytes):
        x+1: 4100
        x+2: 4108
        x+3: 4116
    */
    printf("%p\n",x);
    printf("%p\n",x+1);
    printf("%p\n",x+2);
    printf("%p\n",x+3);
    return 0;
}
