// BSIT 1C MIDTERM (IT PROG)

#include <stdio.h>
#include <stdlib.h>
#define disp printf
#define get scanf

int main () {

    float assignment1, assignment2;
    float seat_work1, seat_work2, seat_work3;
    float quiz1, quiz2, quiz3;
    float exam, grade;

    disp("\n\n");

    disp("Enter Score of Assignment 1: ");
    get("%f", &assignment1);
    disp("Enter Score of Assignment 2: ");
    get("%f", &assignment2);
    disp("Enter Score ef Seat Work 1: ");
    get("%f", &seat_work1);
    disp("Enter Score ef Seat Work 2: ");
    get("%f", &seat_work2);
    disp("Enter Score ef Seat Work 3: ");
    get("%f", &seat_work3);
    disp("Enter Total Score of Examination: ");
    get("%f", &exam);

    grade = ((assignment1+assignment2)*0.10)+
            ((seat_work1+seat_work2+seat_work3)*0.20)+
            ((quiz1+quiz2+quiz3)*0.30)+
            (exam*0.40);
    
    system("cls");

    disp("\n\n| -------------------------------- |\n");
    disp("    The Total Grade is : %.2f", grade);
    disp("\n| -------------------------------- |\n");
    
    return 0;
}