/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float base, exponent, answer;
char prog, again;

    int main() {

        do{
            system("cls");
            printf("\nWould you like to try the 'EXPONENTIATION' program? [Y/N]:    ");
            scanf("%s", &prog);
            if(prog == 'y' || prog == 'Y'){
                system("cls");
                printf("___________________________________________\n\n");
                printf("    Enter Base: ");
                scanf("%f", &base);
                printf("    Enter Exponent: ");
                scanf("%f", &exponent);
                printf("___________________________________________\n\n");

                answer = pow(base, exponent);

                system("cls");
                printf("\n\n\nThe calculated exponentiation of the base [%.1f] and the exponent [%.0f] is %.2f\n\n\n",
                       base, exponent, answer);

            }else if(prog == 'n' || prog == 'N'){
                return 0;
            }else{
                main();
            }

            printf("Do you want to use this function again? [Y/N]:  ");
            scanf("%s", &again);

        }while(again == 'y' || again == 'Y');
            if(again == 'n' || again == 'N'){
                return 0;
            }else{
                main();
            }
    return 0;
}
