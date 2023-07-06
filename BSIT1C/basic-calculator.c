/*
NAME: DAYANDAYAN, MARY JEAN C.
COURSE & SECTION: BSIT 1C
BASIC CALCULATOR
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a, b, c, sum, diff, prod, q, result;


int main() {
                system("cls");
                // User Input
                    printf("\nEnter 1st number: ");
                    scanf("%f", &a);
                    printf("Enter 2nd number: ");
                    scanf("%f", &b);
                    printf("Enter 3rd number: ");
                    scanf("%f", &c);
                    system("cls");

                // Process
                    sum = a + b + c;
                    diff = c - b;
                    prod = a * b;
                    q = a /b;
                    result = pow(c,b);

                // Output
                    printf("_____________________________________________________________\n\n");
                    printf("  The sum of %.2f, %.2f, and %.2f is %.2f\n", a, b, c, sum);
                    printf("-------------------------------------------------------------\n\n");
                    printf("  The difference of %.2f and %.2f number is %.2f\n", c, b, diff);
                    printf("-------------------------------------------------------------\n\n");
                    printf("  The product of %.2f and %.2f number is %.2f\n", a, b, prod);
                    printf("-------------------------------------------------------------\n\n");
                    printf("  The Quotient of %.2f and %.2f number is %.2f\n", a, b, q);
                    printf("-------------------------------------------------------------\n\n");
                    printf("  The Result of %.2f raise to %.2f is %.2f\n", c, b, result);
                    printf("_____________________________________________________________\n\n\n\n");

    return 0;
}
