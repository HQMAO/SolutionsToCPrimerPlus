#include <stdio.h>
int main(void){
int num, i;
printf("Enter an integer:\n");
scanf("%d", &num);
i = num;
while (i <= num + 10)
printf("%d\n", i++);
return 0;
}
