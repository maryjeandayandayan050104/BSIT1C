// DAYANDAYAN, MARY JEAN C.
// BSIT 1C
// GRADE RANGE

#include <stdio.h>
#include <stdlib.h>
float grade;

int main () {

system("cls");

            printf("___________________________________________________\n\n");
            printf("Enter your Grade: ");
            scanf("%f", &grade);
            printf("___________________________________________________\n\n\n\n");
                if(grade>=90 && grade<=100){
                    printf("               GRADE: A!\n\n\n");
                }else if(grade>=80 && grade<90){
                    printf("               GRADE: B!\n\n\n");
                }else if(grade>=70 && grade<80){
                    printf("               GRADE: C!\n\n\n");
                }else if(grade>=60 && grade<70){
                    printf("               GRADE: D!\n\n\n");
                }else if(grade>=0 && grade<60){
                    printf("               GRADE: E!\n\n\n");
                }else{
                    printf("               OUT OF RANGE!\n\n\n");
                }

    return 0;
}
