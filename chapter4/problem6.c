#include <stdio.h>
#include <string.h>
int main(void){
char fn[20], ln[20];
printf("Enter your first name:\n");
scanf("%s", fn);
printf("Enter your last name:\n");
scanf("%s", ln);
printf("%s %s\n", fn, ln);
printf("%*d %*d\n", (int)strlen(fn), (int)strlen(fn), (int)strlen(ln), (int)strlen(ln));
printf("%s %s\n", fn, ln);
printf("%-*d %-*d\n", (int)strlen(fn), (int)strlen(fn), (int)strlen(ln), (int)strlen(ln));
return 0;
}
