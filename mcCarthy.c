#include <stdio.h>
 int mcCarthy(int num){
    if(num>100){
        return num-10;
    }else {
        return mcCarthy(mcCarthy(num+11));
    }
    return num;
}
int main(){
     int casos;
 
    scanf("%i",&casos);
    for (int i=0;i<casos;i++){
        int num;
        scanf("%i",&num);
        int result = mcCarthy(num);
        printf("%i\n",result);
        }
        return 0;
    }
