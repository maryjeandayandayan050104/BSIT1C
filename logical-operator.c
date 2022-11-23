// DAYANDAYAN, MARY JEAN C.
// BSIT 1C
// LOGICAL OPERATOR

#include <stdio.h>
#include <stdlib.h>

int main () {

    int x = 5;
    int y = 10;
    int a = 20;
    int b = 30;

    if(x<y && a==b){
        printf("x is less thanm y AND a is equal to b\n");
    }

    if(x<y || a==b){
        printf("x is less tham y OR a is equal to b\n");
    }

    if(!(x>y && a<b)){
        printf("NOT OPERATION\n");
    }

    printf("CPDES AFTER IF!");
    return 0;
}