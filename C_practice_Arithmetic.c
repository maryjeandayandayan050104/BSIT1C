#include <stdio.h>
#define p printf

/*
* Hello! This is the basic arithmetic practice program.
* Made by MARY JEAN CAYLAN DAYANDAYAN ^^
*/

main() {

    p("----------------- BASIC ARITHMETIC PROGRAM -----------------\n\n\n");

    int a = 10;
    int b = 20;
    int c;

    c = b + a;
    p("Addition: %d\n", c);
    c = b - a;
    p("Substraction: %d\n", c);
    c = b * a;
    p("Multiplication: %d\n", c);
    c = b / a;
    p("Division: %d\n", c);
    c = b % a;
    printf("Modulus: %d\n", c);
    c = ++a;
    p("The increment value of a is %d\n", c);
    c = --b;
    printf("The decrement value of b is %d\n\n", c);

    p("------------------------------------------------------------\n\n\n");
    return 0;
}
