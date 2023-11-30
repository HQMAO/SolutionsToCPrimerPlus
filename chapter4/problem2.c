#include <stdio.h>
#include <string.h>
int main(void){
char fn[20];
printf("Enter your fisrt name:\n");
scanf("%s", fn);
printf("\"%s\"\n", fn);
printf("\"%20s\"\n", fn);
printf("\"%-20s\"\n", fn);
printf("\"%*s\"\n", (int)strlen(fn)+3, fn);
return 0;
}

