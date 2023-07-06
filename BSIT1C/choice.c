/*
DAYANDAYAN, MARY JEAN C.
BSIT 1C
CHOICE
*/

#include <stdio.h>
#include <stdlib.h>

    char let;
    float num1, num2, ans;

    int main() {

        printf("\n\nA.  ADD         B.  SUB\n");
        printf("C.  MULTI       D. DIV\n\n");
        printf("Enter a letter: ");
        scanf("%c", &let);
        
        switch(let){
            case 'A': case 'a':
            system("cls");
            printf("Enter 1st Number: ");
            scanf("%f", &num1);
            printf("Enter 2nd Number: ");
            scanf("%f", &num2);
            ans = num1 + num2;
            printf("\n\n-----------------------------------------------------\n\n");
            printf("%.1f added to %.1f is equal to %.2f\n\n", num1, num2, ans); break;


            case 'B': case 'b':
            system("cls");
            printf("Enter 1st Number: ");
            scanf("%f", &num1);
            printf("Enter 2nd Number: ");
            scanf("%f", &num2);
            ans = num1 - num2;
            printf("\n\n-----------------------------------------------------\n\n");
            printf("%.1f subtracted to %.1f is equal to %.2f\n\n", num1, num2, ans); break;
            
            
            case 'C': case 'c':
            system("cls");
            printf("Enter 1st Number: ");
            scanf("%f", &num1);
            printf("Enter 2nd Number: ");
            scanf("%f", &num2);
            ans = num1 * num2;
            printf("\n\n-----------------------------------------------------\n\n");
            printf("%.1f multiplied to %.1f is equal to %.2f\n\n", num1, num2, ans); break;
            

            case 'D': case 'd':
            system("cls");
            printf("Enter 1st Number: ");
            scanf("%f", &num1);
            printf("Enter 2nd Number: ");
            scanf("%f", &num2);
            ans = num1 / num2;
            printf("\n\n-----------------------------------------------------\n\n");
            printf("%.1f divided by %.1f is equal to %.2f\n\n", num1, num2, ans); break;


            default:
                printf("UNKNOWN SELECTION!"); break;
        }
        return 0;
    }
