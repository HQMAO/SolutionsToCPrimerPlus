#include <stdio.h>
int main(void){
double input;
printf("Enter a floating-point number:\n");
scanf("%lf", &input);
printf("The input is %.1lf or %.1le.\n", input, input);
printf("The input is %+.3lf or %.3lE.\n", input, input);
return 0;
}
