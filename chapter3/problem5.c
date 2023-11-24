#include <stdio.h>
#define SEC_IN_A_YEAR 3.156e+07
int main(void){
int age;
printf("Enter your age in years: ");
scanf("%d", &age);
printf("It is %e in seconds.\n", age*SEC_IN_A_YEAR);
}
