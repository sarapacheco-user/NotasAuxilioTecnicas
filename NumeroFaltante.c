#include <stdio.h>

int main(){
  
    long long  n,soma_total;
    int temp,falta,soma;
    
    scanf("%lld", &n);
  
    soma_total = n * (n + 1) / 2;
  
    soma = 0;

        for (int i = 0; i < n - 1; i++) {
        scanf("%i", &temp);
        soma += temp;
        }
      
    

    falta = (soma_total - soma);
    printf("%i\n", falta);

  return 0;
}
