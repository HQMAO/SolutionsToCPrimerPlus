#include <stdio.h>
int main(void){
int time, weeks, days;
printf("Enter time in days:\n");
while(scanf("%d", &time)==1){
if(time<=0)
  break;
weeks = time/7;
days = time%7;
printf("%d %s %d %s, %d %s.\n", 
time, time>1?"days are":"day is", 
weeks, weeks>1?"weeks":"week", 
days, days>1?"days":"day");
printf("Enter time in days (<=0 to quit):\n");
}
return 0;
}
