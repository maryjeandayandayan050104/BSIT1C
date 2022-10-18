/*
DAYANDAYAN, MARY JEAN C.
BSIT 1C
EXPONENTIATION 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int base, exponent, answer;

    int main() {
        printf("Enter Base: ");
        scanf("%d", &base);
        printf("Enter Exponent: ");
        scanf("%d", &exponent);

    answer = pow(base, exponent);
    
    printf("ANSWER is %i", answer);
    
    return 0;

}