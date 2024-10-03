#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;

    while (scanf("%d", &n) && n != -1) {
        char num[100001];
        scanf("%s", num);
        int soma = 0;
        
      for (int i = 0; i < n; i++) {
            soma += num[i] - '0';
        }

        if (soma % 3 == 0) {
            printf("%d sim\n",soma);
        } else {
            printf("%d nao\n",soma);
        }
    }
return 0;
}
