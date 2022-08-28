#include<stdio.h>

int main()
{
    int t, number1, number2;

    scanf("%d", &t);
    int sum[t];
    for(int t1 = 1; t1 <=t; t1++)
    {
        scanf("%d%d", &number1, &number2);
        sum[t1] = number1 + number2;
    }
    for(int t1 = 1; t1 <=t; t1++)
    {
        printf("%d ", sum[t1]);
    }
    return 0;
}
