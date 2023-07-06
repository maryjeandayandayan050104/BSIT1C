/*
DAYANDAYAN, MARY JEAN C.
BSIT 1C
FAHRENHEIT TO CELSIUS
*/

#include <stdio.h>
#include <stdlib.h>
float c, f;

int main() {

            system("cls");
            printf("\n\n    Enter Fahrenheit: ");
            scanf( "%f", &f);

            c = (f-32)*5/9;
            system("cls");

            printf("---------------------------------------------------\n\n\n");
            printf("   %.1f Fahrenheit = %.1f Celsius\n\n", f, c);
            printf("___________________________________________________\n\n\n");

return 0;

}
