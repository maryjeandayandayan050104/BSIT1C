#include <stdio.h>
#include <stdlib.h>

// DAYANDAYAN, MARY JEAN C
// BSIT 1C
// Color

int main () {
    char color;

    printf("(B)Blue\n(R)Red\n(G)Green\n(Y)Yellow\n\nEnter you color : ");
    scanf("%c", &color);

    if(color == 'B' || color == 'b'){
        printf("Color: BLUE\n");
    }else if(color == 'R' || color == 'r'){
        printf("Color: RED\n");
    }else if(color == 'G' || color == 'g'){
        printf("Color: GREEN\n");
    }else if(color == 'Y' || color == 'y'){
        printf("Color: YELLOW\n");
    }else{
        printf("UNKNOWN COLOR\n");
    }

    return 0;

}
