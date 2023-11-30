#include <stdio.h>
int main(void){
char name[20];
float height;
printf("Enter your name:\n");
scanf("%s", name);
printf("Enter your height in inches:\n");
scanf("%f", &height);
printf("%s, you are %.3f feet tall.\n", name, height/12.);
return 0;
}
