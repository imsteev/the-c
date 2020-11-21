#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 300, 280, ..., 20, 0; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step, current;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = upper;

    printf("%s %s\n", "Fahrenheit", "Celsius");

    for (current = upper; current >= 0; current -= step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr -= step;
    };
}
