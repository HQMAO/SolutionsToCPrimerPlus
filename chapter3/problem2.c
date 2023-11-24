#include <stdio.h>
int main(void){
int c;
printf("Enter a ASCII code value: \n");
scanf("%d", &c);
printf("The character having that ASCII code is %c.\n", (char) c);
return 0;
}
