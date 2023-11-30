#include <stdio.h>
#include <float.h>
int main(void){
float flt = 1.0/3.0;
double db = 1.0/3.0;
printf("flt: %.4f db: %.4f\n", flt, db);
printf("flt: %.12f db: %.12f\n", flt, db);
printf("flt: %.16f db: %.16f\n", flt, db);
printf("FLT_DIG: %d DBL_DIG: %d\n", FLT_DIG, DBL_DIG);
return 0;
}
