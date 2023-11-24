#include <stdio.h>
int main(void){
const float PINT2CUP = 2.0f, CUP2OUNCE = 8.0f;
const float OUNCE2TABLESPOON = 2.0f, TABLESPOON2TEASPOON = 3.0f;
float volume;
printf("Enter volume in cups: \n");
scanf("%f", &volume);
printf("The volume is %f in pints, %f in ounces, %f in tablespoons and %f in teaspoons.\n", 
      volume/PINT2CUP, volume*CUP2OUNCE, volume*CUP2OUNCE*OUNCE2TABLESPOON,
      volume*CUP2OUNCE*OUNCE2TABLESPOON*TABLESPOON2TEASPOON);
}
