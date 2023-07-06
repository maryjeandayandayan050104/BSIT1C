/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>

    int num, a, e;
    char whiLoop, again;

int main () {

    do{
    system("cls");
    printf("\nProceed in the program? [Y/N]: ");
    scanf("%s", &whiLoop);
        if(whiLoop == 'y' || whiLoop == 'Y'){
        system("cls");
            printf("  Enter the initial value: ");
            scanf("%i", &num);
            system("cls");
            printf("  You want to increase by what number? ");
            scanf("%i", &a);
            system("cls");
            printf("  You want to stop in what number? ");
            scanf("%i", &e);
            system("cls");
            printf("___________________________________________\n\n");
            printf(" Initial Value     :  %i\n", num);
            printf(" Increasing Value  :  %i\n", a);
            printf(" Stop Value        :  %i\n", e);
            printf("___________________________________________\n\n");

                while(num <= e) {
                    printf("  %d\n", num);
                    num += a;
                }

        }else if(whiLoop == 'n' || whiLoop == 'N'){
            return 0;
        }else{
            main();
        }

            printf("___________________________________________\n\n");
            printf("Do you want to use this program again? [Y/N]:  ");
            scanf("%s", &again);

    }while(again == 'y' || again == 'Y');
        if(again == 'n' || again == 'N'){
            return 0;
        }else{
            main();
        }
    return 0;
}
