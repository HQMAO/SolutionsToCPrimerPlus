#include <stdio.h>
int Temperatures(double);
int main(void)
{
    double Fahrenheit;
    printf("Enter temperature in Fahrenheit:");
    while(scanf("%lf", &Fahrenheit) == 1)
    {
    Temperatures(Fahrenheit);
    printf("Enter temperature in Fahrenheit (q to quit):");
    }
    return 0;
}

int Temperatures(double Fahrenheit)
{
    const double RATIO = 5.0/9.0, thirtytwo = 32.0, ZERO = 273.16;
    float Celsius, Kelvin;
    Celsius = RATIO * (Fahrenheit - thirtytwo);
    Kelvin = Celsius + 273.16;
    printf("Temperature is %.2f in Fahrenheit, %.2f in Celsius, %.2f in Kelvin.\n", Fahrenheit, Celsius, Kelvin);
    return 0; 
}
