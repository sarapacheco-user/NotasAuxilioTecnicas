#include <stdio.h>
#include <stdbool.h>
bool isPrime(unsigned long long int  num) {
    
    if (num <= 1) return false;   
    else if (num <= 3) return true;    
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}
bool PrimoGemeo (unsigned long long int num){
  unsigned long long int Menos2 = num - 2;
  unsigned long long int Mais2 = num + 2;
  if(isPrime(Menos2)){
    printf("O numero %llu eh um primo gemeo\n",num);
    return true;
  }else if(isPrime(Mais2)){
    printf("O numero %llu eh um primo gemeo\n",num);
    return true;
  }else {
    printf("O numero %llu nao eh um primo gemeo\n",num);
    return false;
  }
}
int main(){
unsigned long long int  N,num,numMenos2,numMais2;
scanf("%llu",&N);
for(int i = 0; i<N; i++){
  scanf("%llu",&num);
  numMenos2 = num - 2;
  numMais2  = num + 2;
  if(!isPrime(num)){
    printf("O numero %llu nao eh um primo gemeo\n",num);
  }else{
    PrimoGemeo(num);
  }
}
 
  return 0;
}
