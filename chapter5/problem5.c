#include <stdio.h>
int main(void)
{
    int count, sum, limit;
    printf("Enter an integer:");
    scanf("%d", &limit);
    count = 0;
    sum = 0;
    while (count++ < limit)
        sum = sum + count;
    printf("sum = %d\n", sum);
    return 0;
}
