#include<stdio.h>
int main(){
    register unsigned int i = 0;
    long long max, min, n;
    while(scanf("%lld", &n)==1){
        if(i){
            if(n > max){
                max = n;
            }
            if(n < min){
                min = n;
            }
        }else{
            max = n;
            min = n;
            ++i;
        }
    }
    printf("%lld %lld\n", max, min);
    return 0;
}
