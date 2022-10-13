/*
DAYANDAYAN, MARY JEAN C.
BSIT 1C
FAHRENHEIT TO CELSIUS
*/

#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

    float c, f;

int main() {

p("Enter Fahrenheit: ");
s( "%f", &f);

c = (f-32)*5/9;
system("cls");

p("%.1f Fahrenheit = %.1f Celsius", f, c);

return 0;

}
