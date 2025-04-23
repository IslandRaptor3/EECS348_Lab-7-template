#include "temperature.h"

int main(int argc, char *argv[]) {
    float temp, out_temp;
    char unit;
    printf("Enter a numerical value representing temperature:\n");
    scanf("%f", &temp);
    //I guess this is a thing to stop the following scanf from skipping:
    while((getchar()) != '\n'); //It discards all characters until newline. Now the following should work:
    printf("Is that in Fahrenheit (f), Celsius (c) or Kelvin (k)?\n");
    scanf("%c", &unit);

    //Can't escape celsius
    if (unit == 'f') {
        temp = fahrenheit_to_celsius(temp);
    } else if (unit == 'k') {
        temp = kelvin_to_celsius(temp);
    }

    //Categorize
    if (temp < 0) {
        printf("Freezing: ");
        
    } else if (temp <= 10) {
        printf("Cold: ");
    } else if (temp <= 25) {
        printf("Comfortable: ");
    } else if (temp <= 35) {
        printf("Hot: ");
    } else if (temp > 35) {
        printf("Extreme Heat: ");
    }

    //CAN escape celsius
    if (unit == 'f') {
        out_temp = celsius_to_fahrenheit(temp);
        printf(" %.2fºF\n", out_temp);
    } else if (unit == 'k') {
        out_temp = celsius_to_kelvin(temp);
        printf("%.2fºK\n", out_temp);
    } else {
        printf("%.2fºC\n", temp);
    }

    //Simple Weather Advisory
    if (temp < 0) {
        printf("Wear a jacket. Please.");
        
    } else if (temp <= 10) {
        printf("Bit nippy innit?");
    } else if (temp <= 25) {
        printf("Oscilate between indoors and outdoors at will.");
    } else if (temp <= 35) {
        printf("Buy ice cream, you'll be good.");
    } else if (temp > 35) {
        printf("Stay indoors. Please.");
    }



    return 0;
}
