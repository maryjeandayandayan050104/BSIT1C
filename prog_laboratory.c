/*
NAME: DAYANDAYAN, MARY JEAN C.
*/

#include <stdio.h>
#define p printf
#define s scanf

main() {

    int a, b, c, sum, diff, prod, q, result;


    p("\nEnter 1st number: ");
    s("%d", &a);
    p("Enter 2nd number: ");
    s("%d", &b);
    p("Enter 3rd number: ");
    s("%d", &c);

    system("cls");

    sum = a + b + c;
    diff = c - b;
    prod = a * b;
    q = a /b;
    result = pow(c,b);

    p("The sum of %d, %d, and %d is %d\n", a, b, c, sum);
    p("The difference of %d and %d number is %d\n", c, b, diff);
    p("The product of %d and %d number is %d\n", a, b, prod);
    p("The Quotient of %d and %d number is %d\n", a, b, q);
    p("The Result of %d raise to the power of %d is %d\n", c, b, result);


    return 0;
}



