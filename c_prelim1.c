/*
NAME: DAYANDAYAN, MARY JEAN C.
BSIT - 1C
*/

#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf

    float a, b;
    char ck;
       

int main () {

    do {
    p("\n\n=====================================\n");
    p("\n\nEnter first value: ");
    s(" %f", &a);
    p("Enter second value: ");
    s(" %f", &b);
    
    system("cls");
    
    if (a > b) {
        p("\n\nThe largest value is %.2f", a);
        }else{
            p("The largest value is %.2f", b);
            }
            again:
            p("\n\nCheck another value? (y/n): ");
            s(" %c", &ck);
            
            system("cls");
            
            }while(ck == 'y' || ck == 'Y');
            if(ck == 'n' || ck == 'N'){
                p("\n\n\n !<<< ================== THANK YOU ^^ =================== >>>! \n\n\n");
                return 0;
                }else{
                    p("\n\nINVALID INPUT!");
                    goto again;
                }
}