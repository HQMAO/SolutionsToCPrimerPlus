#include <stdio.h>
int main(void){
float height, inches;
int feet;
const float FEET = 30.48, INCH = 2.54;
printf("Enter a height in centimeters:");
while(scanf("%f", &height)==1){
if(height<=0){
printf("bye\n");
break;
}
feet = (int) height/FEET;
inches = (height - feet * FEET)/INCH;
printf("%.1f cm = %d %s, %.1f %s\n",
height, feet, feet<=1?"foot":"feet",
inches, inches==1?"inch":"inches");
printf("Enter a height in centimeters (<=0 to quit):");
}

}
