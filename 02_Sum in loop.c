#include<stdio.h>

int main()
{
    int fst_input, secnd_input, sum = 0;

    printf("input data: \n");
    scanf("%d", &fst_input);

    for(int t1 = 1; t1 <=fst_input; t1++)
    {
        scanf("%d", &secnd_input);

        sum = sum + secnd_input;
    }
    printf("\nanswer:\n%d", sum);

    return 0;
}
