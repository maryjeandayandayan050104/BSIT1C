 // DAYANDAYAN, MARY JEAN C
 // BSIT 1C
 // COLOR SELECTION

 #include <stdio.h>
 #include <stdlib.h>

 int main () {

    char color;

    printf("(B)Blue\n(R)Red\n(G)Green\n(Y)Yellow\n\nEnter you color : ");
    scanf("%c", &color);


 switch(color) {

        case 'Y': case 'y':
            printf("COLOR: YELLOW\n");
            break;
        case 'R': case 'r':
            printf("COLOR: RED\n");
            break;
        case 'G': case 'g':
            printf("COLOR: GREEN\n");
            break;
        case 'B': case 'b':
            printf("COLOR: BLUE\n");
            break;
        case 'V': case 'v':
            printf("COLOR: VIOLET\n");
            break;
        default:
            p("\nUNKNOWN COLOR\n\n");
            break;
    }

    return 0;
    }
