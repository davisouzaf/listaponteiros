#include <stdio.h>

int main(){
    int pulo[]={1,2,3,4,5,6};
    printf("*(pulo+2): %d\n",*(pulo+2));
    printf("*(pulo+4): %d\n",*(pulo+4));
    printf("pulo+4: %d\n",*pulo+4);
    printf("*pulo+2: %d\n",*pulo+2);
    printf("As expressões que referenciam o terceiro elemento são a primeira e a quarta expressões\n");
}
