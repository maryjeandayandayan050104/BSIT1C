// PASSED OR FAILED
// Dayandayan, Mary Jean C
// BSIT 1C

#include <stdio.h>
#include <stdlib.h>
float g;

int main () {

        system("cls");
            printf("Enter Student Grade:   ");
            scanf("%f", &g);
            system("cls");
                if(g >= 75){
                    printf("The grade %.1f is a PASSING grade\n\n\n\n", g);
                }
                else{
                    printf("The grade %.1f is a FAILED grade\n\n\n\n", g);
                }

    return 0;
}
