#include <stdio.h>
int main(void){
float speed, size;
const float BITSINBYTE = 8;
printf("Enter download speed in Mbs:\n");
scanf("%f", &speed);
printf("Enter file size in MB:\n");
scanf("%f", &size);
printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
printf("downloads in %.2f seconds.\n", size*BITSINBYTE/speed);
return 0;

}
