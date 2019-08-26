#include <stdio.h>



int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  for(i=0;i<3;i++){
      printf("%X ",vet+i);
    }
  return 0;
}
/*O primeiro programa imprime os valores que estão no vetor, e o segundo mostra os
endereços de memoria em hexadecimal de cada elemento do vetor
*/
