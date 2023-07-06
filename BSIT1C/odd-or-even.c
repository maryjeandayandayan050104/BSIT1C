/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
*/

#include <stdio.h>
#include <stdlib.h>
int num;

int main() {

            printf("\n\n Odd or Even\n\n");
            printf(" Input Number:   ");
            scanf("%d", &num);
                if(num % 2 == 0) {
                    printf(" The number is even.\n\n");
                }else{
                    printf(" The number is odd.\n\n");
                }
      return 0;
}
