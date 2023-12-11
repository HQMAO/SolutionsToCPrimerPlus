#include <stdio.h>
double cube(double);
int main(void)
{
    double num;
    printf("Enter a floating-point number:");
    scanf("%lf", &num);
    printf("%f cubed is %f.\n", num, cube(num));
    return 0;
}
double cube(double num)
{
    return num*num*num;
}
