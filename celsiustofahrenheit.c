/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>

    char convert, again;
    float c, f;

int main() {

    do{
    system("cls");
    printf("\nDo you want to try out the 'CELSIUS TO FAHRENHEIT CONVERSION' program? [Y/N]:  ");
    scanf("%s", &convert);

        if(convert == 'y' || convert == 'Y'){
            system("cls");
            printf("\n\n    Enter Celsius: ");
            scanf( "%f", &c);

            f = (c*9/5)+32;
            system("cls");

            printf("___________________________________________________\n\n");
            printf("   %.1f Celsius = %.1f Fahrenheit\n\n", c, f);
            printf("___________________________________________________\n\n");

        }else if(convert == 'n' || convert == 'N'){
            return 0;
        }else{
            main ();
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
