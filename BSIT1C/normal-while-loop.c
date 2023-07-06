/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>

    float i;
    char whiLoop, again;

int main (){

    do{
    system("cls");
    printf("\nProceed to the 'WHILE LOOP' program? [Y/N]:   ");
    scanf("%s", &whiLoop);

        if(whiLoop == 'y' || whiLoop == 'Y'){
        system("cls");
            printf("___________________________________________\n\n");
            printf(" Enter a number [1-10]:  ");
            scanf("%f", &i);
            printf("___________________________________________\n\n");
                while(i<=10){
                    printf(" %.0f\n", i);
                    i++;
                }

        }else if(whiLoop == 'n' || whiLoop == 'N'){
            return 0;
        }else{
            main();
        }
            printf("\n___________________________________________\n\n");
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