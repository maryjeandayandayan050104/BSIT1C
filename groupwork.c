#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, num3, num4, num5, num6, classt, quiz, ass, proj, major, totalgrade;

    printf("\n\n===============================================\n\n\n");

    printf("Enter student QUIZ grade: ");
    scanf("%f", &num1);
    printf("Enter student ASSIGNMENT grade: ");
    scanf("%f", &num2);
    printf("Enter student PROJECT grade: ");
    scanf("%f", &num3);
    printf("Enter student CLASS STANDING grade: ");
    scanf("%f", &num4);
    printf("Enter student MAJOR EXAM grade: ");
    scanf("%f", &num5);

    classt = (num1 / 100) * 10;
    quiz = (num2 / 100) * 15;
    ass = (num3 / 100) * 15;
    proj = (num4 / 100) * 20;
    major = (num5 / 100) * 40;
    totalgrade = classt + quiz + ass + proj + major;

    printf("\n\n===============================================\n\n");

    if(totalgrade >= 75){
        printf("The student got a PASSING grade of %.2f\n\n", totalgrade);
    }else{
        printf("The student got a FAILING grade of %.2f\n\n", totalgrade);
    }


}