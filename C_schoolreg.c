/*
INPUT STATEMENT AND FORMAT SPECIFIERS
PROGRAMMED BY: DAYANDAYAN, MARY JEAN
*/

#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    char con[20], name[50], bd[50], ad[50], em[50], citsh[50], fname[50], mname[50], prim[50], sec[50], ter[50], c1[50], c2[50], c3[50];
    int age;

    p("\n\n\n--------------------------- REGISTRATION FORM ---------------------------\n\n");

    p("NAME: ");
    s(" %50[^\n]", name);
    p("AGE: ");
    s("%d", &age);
    p("BIRTHDAY: ");
    s(" %50[^\n]", bd);
    p("ADDRESS: ");
    s(" %50[^\n]", ad);
    p("CONTACT NO.: ");
    s("%s", con);
    p("EMAIL: ");
    s(" %50[^\n]", em);
    p("CITIZENSHIP: ");
    s(" %50[^\n]", citsh);
    p("FATHER'S NAME: ");
    s(" %50[^\n]", fname);
    p("MOTHER'S NAME: ");
    s(" %50[^\n]", mname);

    p("\n\n------------------------- EDUCATIONAL ATTAINMENT ----------------------\n\n");
    p("PRIMARY: ");
    s(" %50[^\n]", prim);
    p("SECONDARY: ");
    s(" %50[^\n]", sec);
    p("TERTIARY: ");
    s(" %50[^\n]", ter);
    p("\n1ST CHOICE: ");
    s(" %50[^\n]", c1);
    p("2ND CHOICE: ");
    s(" %50[^\n]", c2);
    p("3RD CHOICE: ");
    s(" %50[^\n]", c3);

    system("cls");
    p("\n\n\n\n\n----------------------------------------------------------------------\n\n");

    p("\nYour name is %s", name);
    p("\nYour age is %d", age);
    p("\nYour birthday is %s", bd);
    p("\nYour current address is %s", ad);
    p("\nYour contact number is %s", con);
    p("\nYour email address is %s", em);
    p("\nYour citizenship is %s", citsh);
    p("\nYour father's name is %s", fname);
    p("\nYour mother's name is %s", mname);

    p("\n\n\nPrimary: %s", prim);
    p("\nSecondary: %s", sec);
    p("\nTertiary: %s", ter);
    p("\n\nYour first choice is %s", c1);
    p("\nYour second choice is %s", c2);
    p("\nYour third choice is %s", c3);

    p("\n\n----------------------------------------------------------------------\n\n\n\n\n");

    return 0;
}
