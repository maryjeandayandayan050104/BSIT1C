
// Two Numbers Comparison
// Dayandayan, Mary Jean C
// BSIT 1C

#include <stdio.h>
#include <stdlib.h>
float a, b;

int main () {

        system("cls");
            printf("___________________________________________________________________\n\n");
            printf("Enter value for a: ");
            scanf("%f", &a);
            printf("Enter value for b: ");
            scanf("%f", &b);
            printf("___________________________________________________________________\n\n\n");
                if(a>b){
                printf(" The value of a   [%.2f]  is greater than the value of b   [%.2f]  \n\n", a, b);
                }
                if(b>a){
                printf(" The value of b   [%.2f]  is greater than the value of a   [%.2f]  \n\n", b, a);
                }

    return 0;
}
