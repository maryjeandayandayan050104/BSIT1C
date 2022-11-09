// PASSED OR FAILED
// Dayandayan, Mary Jean C
// BSIT 1C

#include <stdio.h>
#include <stdlib.h>

int main () {

    float g;

    printf("Enter Student Grade: ");
    scanf("%f", &g);

    if(g >= 75){
        printf("\n\nThe grade %.2f is a PASSING grade\n\n", g);
    }
    else{
        printf("\n\nThe grade %.2f is a FAILED grade\n\n", g);
    }

    return 0;
}
