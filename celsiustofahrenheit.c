/*
DAYANDAYAN, MARY JEAN C.
BSIT 1C
CELSIUS TO FAHRENHEIT
*/

#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
  
    float c, f;

int main() {

p("Enter Celsius: ");
s( "%f", &c);

f = (c*9/5)+32;
system("cls");

p("%.1f Celsius = %.1f in Fahrenheit", c, f);

return 0;

}
