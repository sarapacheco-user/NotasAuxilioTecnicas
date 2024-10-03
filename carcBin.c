#include <stdio.h>

int main(){
    unsigned long long int n,q;
    int c;
    scanf("%llu %llu",&n,&q);
    while (q--){
        scanf("%d",&c);
        if(n & (1ULL<<c)){
            printf("acesa\n");
        }else{
            printf("apagada\n");
        }
    }
}
