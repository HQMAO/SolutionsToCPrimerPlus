#include <stdio.h>
int main(void){
const float single_molecule = 3.0e-23;
const float quart = 950.0f;
float amount;
printf("Enter an amount of water in quarts: ");
scanf("%f", &amount);
printf("number of molecules: %e \n", amount*quart/single_molecule);
return 0;
}
