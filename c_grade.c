#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

     float g;
     char go;

int main () {

    do {
    p("\n\n\n\nEnter grade: ");
    s("%f", &g);

    system("cls");

    if(g >= 75){
        p("\n\n\n\nPASSED\n\n");
    }else{
        p("\n\n\n\nFAILED\n\n");
    }
    again:
        p("\nCheck another grade? (y/n): ");
        s(" %c", &go);
    }while(go == 'y' || go == 'Y');
    if(go == 'n' || go == 'N'){
        p("\n\n\n<< --- PROGRAM WELL DONE! --- >>");
        return 0;
    }else{
        p("\nInvalid Input! Try again...\n\n\n");
        goto again;
    }
}
