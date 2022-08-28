#include <stdio.h>
int main()
{
    int x =1, sum = 0;

    while(x <= 10) {
        x = x + 1;
        if(x % 2 != 0) {
            continue;
        }
        sum = sum + x;
    }
      printf("Summation of even number from 1 to 10 = %d\n", sum);


    return 0;
}
