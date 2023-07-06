 // DAYANDAYAN, MARY JEAN C
 // BSIT 1C
 // COLOR SELECTION

#include <stdio.h>
#include <stdlib.h>
char color;

 int main () {
       system("cls");

        printf("___________________________________________\n\n");
        printf("    Enter color :  ");
        scanf("%s", &color);
        printf("___________________________________________\n\n");

            switch(color) {
                case 'R': case 'r':
                    printf("COLOR:  RED\n");
                    break;
                case 'O': case 'o':
                    printf("COLOR:  Orange\n");
                    break;
                case 'Y': case 'y':
                    printf("COLOR:  YELLOW\n");
                    break;
                case 'G': case 'g':
                    printf("COLOR:  GREEN\n");
                    break;
                case 'B': case 'b':
                    printf("COLOR:  BLUE\n");
                    break;
                case 'I': case 'i':
                    printf("COLOR:  Indigo\n");
                    break;
                case 'V': case 'v':
                    printf("COLOR:  VIOLET\n");
                    break;
                case 'C': case 'c':
                    printf("COLOR:  Cyan\n");
                    break;
                case 'M': case 'm':
                    printf("COLOR:  Magenta\n");
                    break;
                case 'W': case 'w':
                    printf("COLOR:  White\n");
                    break;
                case 'A': case 'a':
                    printf("COLOR:  Aquamarine\n");
                    break;
                case 'D': case 'd':
                    printf("COLOR:  Dandelion\n");
                    break;
                case 'E': case 'e':
                    printf("COLOR:  Emerald Green\n");
                    break;
                case 'F': case 'f':
                    printf("COLOR:  Fuchsia\n");
                    break;
                case 'H': case 'h':
                    printf("COLOR:  Hazel\n");
                    break;
                case 'J': case 'j':
                    printf("COLOR:  Jade Green\n");
                    break;
                case 'K': case 'k':
                    printf("COLOR:  Kale Green\n");
                    break;
                case 'L': case 'l':
                    printf("COLOR:  Laser Lemon\n");
                    break;
                case 'N': case 'n':
                    printf("COLOR:  Navy Blue\n");
                    break;
                case 'P': case 'p':
                    printf("COLOR:  Purple\n");
                    break;

                default:
                    printf("\nUNKNOWN COLOR\n\n");
                    break;
                }

    return 0;
 }
