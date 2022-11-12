/*
NAME: DAYANDAYAN, MARY JEAN C.
COURSE & SECTION: BSIT 1C
BASIC CALCULATOR
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

int main() {

    float a, b, c, sum, diff, prod, q, result;


    p("\nEnter 1st number: ");
    s("%f", &a);
    p("Enter 2nd number: ");
    s("%f", &b);
    p("Enter 3rd number: ");
    s("%f", &c);

    system("cls");

    sum = a + b + c;
    diff = c - b;
    prod = a * b;
    q = a /b;
    result = pow(c,b);

    p("The sum of %.2f, %.2f, and %.2f is %.2f\n", a, b, c, sum);
    p("The difference of %.2f and %.2f number is %.2f\n", c, b, diff);
    p("The product of %.2f and %.2f number is %.2f\n", a, b, prod);
    p("The Quotient of %.2f and %.2f number is %.2f\n", a, b, q);
    p("The Result of %.2f raise to the power of %.2f is %.2f\n", c, b, result);

    return 0;
}
