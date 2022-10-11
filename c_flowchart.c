#include <stdio.h>
#define s scanf
#define p printf

    int b, h, a;

int main() {
    
    p("Enter base: ");
    s(" %d", &b);
    p("Enter height: ");
    s(" %d", &h);

    a = (b * h) / 2;

    p("The area of the triangle is %d", a);

    return 0;
}
