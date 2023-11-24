#include <stdio.h>
#define INCH 2.54
int main(void){
double height;
printf("Enter your height in inches:\n");
scanf("%le", &height);
printf("Your height is %f in centimeters.\n", height*INCH);
return 0;
}
