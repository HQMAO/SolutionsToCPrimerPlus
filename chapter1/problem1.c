# include <stdio.h>
int main(){
    float inches;
    float centimeters;
    printf("Enter inches: ");
    if (scanf("%f", &inches) == 1){
        printf("You entered: %f inches \n", inches);
        centimeters = inches * 2.54;
        printf("It is %f centimeters \n", centimeters);
    }else{
        printf("Invalid input.");
    }
    return 0;


}