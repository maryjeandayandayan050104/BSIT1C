// DAYANDAYAN, MARY JEAN C.
// BSIT - 1C
// QUALIFIED VOTE

#include <stdio.h>
#include <stdlib.h>

int age;

int main () {
    printf("Enter your age: ");
    scanf("%i", &age);

    if(age>=18){
        printf("Qualified to Vote!\n");
    }else{
        printf("Too Young!\n");
    }

    return 0;

}
