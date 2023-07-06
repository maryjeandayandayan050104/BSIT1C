/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
*/

#include <stdio.h>
#include <stdlib.h>
float num1, num2, add, sub, multi, divid;

int main() {
            system("cls");
            printf("___________________________________________\n\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the sign: ");
            scanf("%s", &sign);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("___________________________________________\n\n\n");
                switch(sign){
                    case '+':
                        add = num1 + num2;
                        printf("     Answer: %.2f\n\n\n", add);
                        break;
                    case '-':
                        sub = num1 - num2;
                        printf("     Answer: %.2f\n\n\n", sub);
                        break;
                    case '*':
                        multi = num1 * num2;
                        printf("     Answer: %.2f\n\n\n", multi);
                        break;
                    case '/':
                        divid = num1 / num2;
                        printf("     Answer: %.2f\n\n\n", divid);
                        break;
                    default:
                        printf("     Invalid Input!\n\n");
                        break;
                    }
    return 0;
}
