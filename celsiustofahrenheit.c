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

p("The equivalent value in Fahrenheit is %.1f", f);

return 0;

}
