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

p("The equivalent value in celsius is %.1f", c);

return 0;

}
