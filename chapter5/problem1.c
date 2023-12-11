#include <stdio.h>
#define HOUR 60
int main(void){
int time, hours, minutes;
printf("Enter time in minutes:\n");
while(scanf("%d", &time) == 1){
if(time <= 0)
{
printf("Invalid input.\n");
break;
}
else
hours = time/HOUR;
minutes = time%HOUR;
printf("%d %s and %d %s\n", hours, hours<=1 ? "hour": "hours", minutes, minutes<=1 ? "minute" : "minutes");
}
return 0;
}
