/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
*/

#include <stdio.h>
#include <stdlib.h>
float c, f;

int main() {
    
            system("cls");
            printf("\n\n    Enter Celsius: ");
            scanf( "%f", &c);

            f = (c*9/5)+32;
            system("cls");

            printf("___________________________________________________\n\n");
            printf("   %.1f Celsius = %.1f Fahrenheit\n\n", c, f);
            printf("___________________________________________________\n\n");
    return 0;
}
