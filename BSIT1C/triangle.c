/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>

int a, b, c, d;
char triLoop, again;

int main () {

    do{
        system("cls");
        printf("\nWould you like to try out the 'TRIANGLE (FOR-LOOP)' program? [Y/N]:  ");
        scanf("%s", &triLoop);

            if(triLoop == 'y' || triLoop == 'Y'){
            system("cls");
            printf("\n\n    Enter number:   ");
            scanf("%d", &d);
                for(b = 1; b <= d; b++){
                    for(a = 1; a <= (d-b); a++){
                        printf(" ");
                    }
                    for(c = 1; c <= b; c++){
                        printf("* ");
                    }
                    printf("\n");
                }

            }else if(triLoop == 'n' || triLoop == 'N'){
                return 0;
            }else{
                main();
            }

            printf("    Do you want to try out the program again? [Y/N]:  ");
            scanf("%s", &again);

        }while(again == 'y' || again == 'Y');
            if(again == 'n' || again == 'N'){
                return 0;
            }else{
                main();
            }

        return 0;
    }
