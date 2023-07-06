/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    FINALS INDIVIDUAL PROJECT
*/

#include <stdio.h>
#include <stdlib.h>

    int z, y;
    char c;

int main() {

    do {
        system("cls");
        printf("_____________________________________________________\n\n");
        printf("    Enter an integer :    ");
        scanf("%d", &z);
        printf("_____________________________________________________\n\n");
            for (y=1; y<=z; y++){
                printf("       %d\n", y);
            }

        printf("_____________________________________________________\n\n");
        printf("Do you want to try out the program again? [Y/N]:  ");
        scanf("%s", &c);

    }while(c == 'y' || c == 'Y');
        if(c == 'n' || c == 'N'){
            return 0;
        }else{
            main();
        }
    return 0;
}