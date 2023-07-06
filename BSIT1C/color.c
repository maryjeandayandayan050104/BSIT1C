// DAYANDAYAN, MARY JEAN C
// BSIT 1C
// Color


#include <stdio.h>
#include <stdlib.h>
char color;

int main () {
        system("cls");
            printf("___________________________________________\n\n");
            printf("Enter color :  ");
            scanf("%s", &color);
            printf("___________________________________________\n\n");
                if(color == 'R' || color == 'r'){
                    printf("Color: RED\n");
                }else if(color == 'O' || color == 'o'){
                    printf("Color: ORANGE\n");   
                }else if(color == 'Y' || color == 'y'){
                    printf("Color: YELLOW\n");
                }else if(color == 'G' || color == 'g'){
                    printf("Color: GREEN\n");
                }else if(color == 'B' || color == 'b'){
                    printf("Color: BLUE\n");
                }else if(color == 'I' || color == 'i'){
                    printf("Color: INDIGO\n");
                }else if(color == 'V' || color == 'v'){
                    printf("Color: VIOLET\n");
                }else if(color == 'C' || color == 'c'){
                    printf("Color: CYAN\n");
                }else if(color == 'M' || color == 'm'){
                    printf("Color: MAGENTA\n");
                }else if(color == 'W' || color == 'w'){
                    printf("Color: WHITE\n");
                }else if(color == 'A' || color == 'a'){
                    printf("Color: AQUAMARINE\n");
                }else if(color == 'D' || color == 'd'){
                    printf("Color: DANDELION\n");
                }else if(color == 'E' || color == 'e'){
                    printf("Color: EMERALD GREEN\n");
                }else if(color == 'F' || color == 'f'){
                    printf("Color: FUCHSIA\n");
                }else if(color == 'H' || color == 'h'){
                    printf("Color: HAZEL\n");
                }else if(color == 'J' || color == 'j'){
                    printf("Color: JADE GREEN\n");
                }else if(color == 'K' || color == 'k'){
                    printf("Color: KALE GREEN\n");
                }else if(color == 'L' || color == 'l'){
                    printf("Color: LASER GREEN\n");
                }else if(color == 'N' || color == 'n'){
                    printf("Color: NAVY BLUE\n");
                }else if(color == 'P' || color == 'p'){
                    printf("Color: PURPLE\n");
                }else{
                    printf("UNKNOWN COLOR\n");
                }

    return 0;

}
