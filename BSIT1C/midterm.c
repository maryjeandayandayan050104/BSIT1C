/*
    DAYANDAYAN, MARY JEAN C.
    BSIT 1C
    MIDTERM (IT PROG)
    FINALS INDIVIDUAL PROJECT
*/


#include <stdio.h>
#include <stdlib.h>
#define disp printf
#define get scanf

    float ass_Final, assignment1, assignment2;
    float seat_Final, seat_work1, seat_work2, seat_work3;
    float quiz_Final, quiz1, quiz2, quiz3;
    float exam_Final, exam;
    float totalGrade;
    char midterm, again;

int main () {

    do{
    system("cls");
    printf("\nWould you like to try out the 'MIDTERM EXAMINATION' program? [Y/N]:   ");
    scanf("%s", &midterm);

        if(midterm == 'y' || midterm == 'Y'){
        system("cls");
            disp("\n\n");
            disp("___________________________________________________\n\n");
            disp("   Enter Score of Assignment 1      : ");
            get("%f", &assignment1);
            disp("   Enter Score of Assignment 2      : ");
            get("%f", &assignment2);
            disp("   Enter Score of Seat Work 1       : ");
            get("%f", &seat_work1);
            disp("   Enter Score of Seat Work 2       : ");
            get("%f", &seat_work2);
            disp("   Enter Score of Seat Work 3       : ");
            get("%f", &seat_work3);
            disp("   Enter score of Quiz No.1         : ");
            get("%f", &quiz1);
            disp("   Enter score of Quiz No.2         : ");
            get("%f", &quiz2);
            disp("   Enter score of Quiz No.3         : ");
            get("%f", &quiz3);
            disp("   Enter Total Score of Examination : ");
            get("%f", &exam);

            ass_Final  = ((assignment1+assignment2)/2) * 0.10;
            seat_Final = ((seat_work1+seat_work2+seat_work3)/3) * 0.20;
            quiz_Final = ((quiz1+quiz2+quiz3)/2) * 0.30;
            exam_Final = exam * 0.40;
            totalGrade = ass_Final + seat_Final + quiz_Final + exam_Final;

            disp("\n ------------------------------------------------- \n\n");
            disp("    Total Grade : %.2f\n\n", totalGrade);
            disp(" ------------------------------------------------- \n\n\n");

        }else if(midterm == 'n' || midterm == 'N'){
            return 0;
        }else{
            main();
        }

            printf("Do you want to try out the program again? [Y/N]:  ");
            scanf("%s", &again);

    }while(again == 'y' || again == 'Y');
        if(again == 'n' || again == 'N'){
            return 0;
        }else{
            main();
        }

    return 0;
}
