#include <stdio.h>

float convertToCelsius(int fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;

    printf("%s %s\n", "Fahrenheit", "Celsius");

    while (fahr <= upper)
    {
        celsius = convertToCelsius(fahr);;
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
