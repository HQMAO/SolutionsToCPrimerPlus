# include<stdio.h>
#define LITERS_PER_GALLON 3.785
#define KMS_PER_MILE 1.609
int main(void){
float miles, gallons;
printf("Enter miles:\n");
scanf("%f", &miles);
printf("Enter gallons:\n");
scanf("%f", &gallons);
printf("miles per gallon: %f\n", miles/gallons);
printf("liters per 100 km: %f\n", gallons*LITERS_PER_GALLON/(0.01*miles*KMS_PER_MILE));
return 0;
}
