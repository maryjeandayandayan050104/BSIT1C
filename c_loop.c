#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

float a, b, c, d, e;
char name[50], go, y, n;


int main() {

do {
    p("\n[====== STUDENT SIMPLE GRADING SYSTEM =====]\n");
    p("\n\nSTUDENT NAME: ");
    s(" %50[^\n]", name);
    p("\nEnter 1st Quarter Grade: ");
    s("%f", &a);
    p("Enter 2nd Quarter Grade: ");
    s("%f", &b);
    p("Enter 3rd Quarter Grade: ");
    s("%f", &c);
    p("Enter 4th Quarter Grade: ");
    s("%f", &d);
    system("cls");
    e = ((a + b + c + d)/4);
    p("Hello, %s !\n", name);
    p("%s 's average grade is %.2f", name, e);
    if(e >= 75) {
        p("\n\nRemark is: PASS\n\n");
    }else{
        p("\n\nRemark is: FAIL\n\n");
    }
    again:
    p("Enter another student number? (y/n): ");
    s(" %c", &go);  
    }while(go == 'y' || go == 'Y');
    if(go == 'n' ||  go == 'N'){
        p("\n\n!<===== Thank You for using this program! =====>!\n\n\n");
    return 0;
    }else{
        p("Invalid Input! Please, try again ...\n\n\n");
        p("===========================================\n\n\n");
    goto again;
    system("cls");
    }
}
