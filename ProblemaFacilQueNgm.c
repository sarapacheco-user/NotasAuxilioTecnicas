#include <stdio.h>


long long parXimpar(long long n) {
    if (n % 2 == 0) {
        n = n / 2;
        printf(" %lld", n);
        parXimpar(n);
      return n;
    }else if (n ==1) {
          return -1;
    } else if (n%2==1){
        n = 3 * n + 1;
        printf("% lld", n);
        parXimpar(n);
    }
    return n;
}

int main() {

    long long n;
    scanf("%lld", &n);

    printf("%lld",n);
    parXimpar(n);

    return 0;
}
