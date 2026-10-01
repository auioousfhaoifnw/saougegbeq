#include <stdio.h>

int main(void) {

    float fahrenheit;
    
    // prompt the user to enter degrees fahrenheit
    printf("Degrees Fahrenheit? ");
    scanf("%f", &fahrenheit); // store it

    // calculate (this has to be after fahrenheit value is stored)
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // print result
    printf("%.2f degrees Fahrenheit is %.2f degrees Celsius.\n", fahrenheit, celsius);
}