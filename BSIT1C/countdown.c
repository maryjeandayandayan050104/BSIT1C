/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

    int x;
    char name, again;

    int main(){

        do{
        system("cls");
        printf("\nWould you like to try out the 'FOR-LOOP' program? [Y/N]:  ");
        scanf("%s", &name);
            if(name == 'y' || name == 'Y'){
            system("cls");
                printf("___________________________________________________\n\n");
                printf("     PROGRAMMED BY :  DAYANDAYAN, MARY JEAN C.\n");
                printf("     SECTION       :  BSIT 1C\n\n");
                printf("___________________________________________________\n\n");
                for(x=10; x>=1; x--){
                    printf("                     %i\n", x);
                    sleep(1);
                }

            }else if(name == 'n' || name == 'N'){
                return 0;
            }else{
                main();
            }

        printf("\n___________________________________________________\n\n");
        printf("Do you want to try out the program again? [Y/N]:  ");
        scanf("%s", &again);

        }while(again == 'y' || again == 'Y');
            if(again == 'n' || again == 'N'){
                return 0;
            }else{
                main();
            }

        return 0;
    }
