#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define p printf

/*
* Hello! This is the basic program to practice making use inputs and outputs.
* Made by MARY JEAN CAYLAN DAYANDAYAN ^^
*/

int main() {

    p("\n\n------------------------------ MASASASA PROGRAM ------------------------------\n\n\n");

    int a, b, c, age;
    long num;
    char uname[100], mname[100], fname[100], gname[100], bd[20], ad[100], newline;


    p("\nEnter full name: ");
    fgets(uname, 100, stdin);
    uname[strlen(uname)-1] = '\0';
    //scanf("%s", uname); -----> Hindi pwede ang spaces

    p("Hello, %s! ^^", &uname);
    p(" How old are you? ");
    scanf("%d", &age);
    if(age <= 17) {
        p("\n\nAge Granted!\nYou're allowed to proceed!\nPlease, fill-up the following form with your guardian/s.");
    }else{
        p("\n\n        Sorry. Please, understand that you're not allowed to proceed.. \n        This program are only for 17 and below of age :))\n\n\n");
        p("\n\n-------------------------------------------------------------------------------\n\n\n");
        return 0;
        }

    p("\n\n-------------------------------------------------------------------------------\n\n\n", &newline);

    p("Birthday: ");
    scanf("%s", &bd);
    p("Address: ");
    fgets(ad, sizeof(ad), stdin);
    p("Mother's Name: ");
    fgets(mname, sizeof(mname), stdin);
    p("Father's Name: ");
    fgets(fname, sizeof(fname), stdin);
    p("Guardian's Name: ");
    fgets(gname, sizeof(gname), stdin);
    p("Guardian's No.: ");
    scanf("%d", &num, &newline);


        p("\n\n\nFORM SUBMITTED. PLEASE, WAIT FOR OUR TEXT MESSAGES AND FURTHER INSTRUCTIONS.");
        p("\n\n-------------------------------------------------------------------------------\n\n\n");


    return 0;
}







    //mga uri ng scan na nahanap ko si internet
    //scanf("%d"," %c", &bd, &newline);
    //fgets(bd, sizeof(mname), stdin);

    /*p("Good day! %s ^^ As you'll submit this form, we will assume that you agree to our terms and services.\n\n Do you wish to proceed? ");
    if( agr == y || agr == Y){
        p("\n\n-------------------------------------------------------------------------------\n\n\n");
        p("SIGE NA NGA LUVE YOU......");
    }else{
        p("Thank you for everything. Goodbye.");
        p("\n\n-------------------------------------------------------------------------------\n\n\n");
        return 0;
    }
    return 0;
}

    p("ENTER THE FIRST VALUE: ");
    scanf("%d", &a);
    p("ENTER THE SECOND VALUE: ");
    scanf("%d", &b);

    // ~~~~~~~~ arithmetic operators ~~~~~~~~

    c = a + b;
    p("Sum is %d\n", c);
    c = a - b;
    p("Difference is %d\n", c);
    c = a * b;
    p("Product is %d\n", c);
    c = a / b;
    p("Quotient is %d\n", c);
    c = a % b;
    printf("Modulus: %d\n", c);


    c = ++c;
    p("The increment value is %d\n", c);
    c = --c;
    p("The decrement value is %d\n\n", c);*/

    // ~~~~~~~~ relational operators ~~~~~~~~

    /*if(a == b) {
        p("FIRST VALUE is EQUAL TO SECOND VALUE\n");
    }else if(a < b) {
        p("FIRST VALUE is LESS THAN SECOND VALUE\n");
    }else if(a > b) {
        p("FIRST VALUE is GREATER THAN SECOND VALUE\n");
    }else{
        p("SORRY. WE DIDN'T CATCH THAT...");
    }*/

    // ~~~~~~~~ logical operators ~~~~~~~~

    // logical NOT
    /*if(a && b) {
        p("LOGICAL NOT: TRUE\n");
    }else{
        p("LOGICAL NOT: FALSE\n");
    }

    // logical OR
    if(a || b) {
        p("LOGICAL OR: TRUE\n");
    }else{
        p("LOGICAL OR: FALSE\n");
    }*/

