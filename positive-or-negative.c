// DAYANDAYAN, MARY JEAN C.
// BSIT 1C
// POSITIVE OR NEGATIVE

#include <stdio.h>
#include <stdlib.h>

int num;

int main (){

    printf("Enter a Number: ");
    scanf("%i", &num);

    if(num>=0){
        printf("POSITIVE NUMBER!\n\n");
    }else{
        printf("NEGATIVE NUMBER!\n\n");
    }

    return 0;

}

