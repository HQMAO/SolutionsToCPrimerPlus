#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void){ // integer overflow, floating-point overflow, and floating-point underflow
float underflow;
printf("Maximum int value: %d \n", INT_MAX);
printf("Maximum int value + 1 produces: %d \n", INT_MAX + 1);
printf("Maximum value for a positive float: %e \n", FLT_MAX);
printf("Maximum value for a positive float * 2.0f: %f \n", FLT_MAX*2.0f);
printf("Minimum value for a positive float retaining full precision: %e \n", FLT_MIN);
printf("Difference between 1.00 and the least float value greater than 1.00: %e \n", FLT_EPSILON);
underflow = FLT_MIN/2.0f;
printf("Minimum value for a positive float retaining full precision devided by 2.0f: %e \n", underflow);
return 0;
}
