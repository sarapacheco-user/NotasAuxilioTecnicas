#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primoXnao(int num){
  if (num == 1) {
    printf("o numero %i nao eh primo\n",num);
    return 0;
  }
  if (num == 2){
    printf("o numero %i eh primo\n",num);
    return 1;
  } 

  else if (num % 2 == 0){ 
    printf("o numero %i nao eh primo\n",num);
    return 0;
  }
  
  int limite = (int)sqrt(num);
  
  for (int i = 3; i <= limite; i += 2) {
      if (num % i == 0){ 
        printf("o numero %i nao eh primo\n",num);
        return 0;
      }
  }
  printf("o numero %i eh primo\n",num);
  return 1;
};

int main(void) {

  int n;
  scanf("%i",&n);
  
  int vetor[n];

  for(int i=0;i<n;i++){
    scanf("%i",&vetor[i]);
  }
  
  for(int i=0;i<n;i++){
    primoXnao(vetor[i]);
  }
  
  return 0;
}

