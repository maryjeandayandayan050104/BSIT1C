
// Two Numbers Comparison
// Dayandayan, Mary Jean C
// BSIT 1C

#include <stdio.h>
#include <stdlib.h>

int main () {

    float a, b;

    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);

    if(a>b){
    printf("\n\nThe %.2f value of a is greater than the %.2f value of b\n", a, b);
    }

    if(b>a){
    printf("\n\nThe %.2f value of b is greater than the %.2f value of a\n", b, a);
    }

    return 0;
}
