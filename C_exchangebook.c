#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define p printf
#define s scanf

/*
* Hello! This is the basic program to practice making use of inputs and outputs.
* PROGRAMMED by MARY JEAN CAYLAN DAYANDAYAN ^^
*/

int main() {

    p("\n\n------------------------------ EXCHANGE BOOK PROGRAM ------------------------------\n\n\n");

    char uname[50], email[20], book[50], studnum, ans, sag, genre;

    p("Enter full name         : ");
    s(" %[^\n]", &uname);
    p("Enter Email             : ");
    s(" %[^\n]", &email);
    p("Enter Student Number    : ");
    s(" %[^\n]", &studnum);

    system("cls");

        p("\n\n=================================== SELECT GENRE ============================================\n\n");
        p("[1]   Romance \n");
        p("[2]   Fiction \n");
        p("[3]   Non-Fiction \n");
        p("[4]   Science Fiction \n");
        p("[5]   Horror \n");
        p("[6]   Teen Fiction \n");
        p("[7]   LGBTQ+ \n");
        p("[8]   Fantasy \n");
        p("[9]   New Adult \n");
        p("[10]  Poetry \n");
        p("==============================================================================================\n\n");
        again:
        p("Enter Preferred Genre (1-10): ");
        s("%d", &genre);

    switch(genre) {

        case 1:
            p("You picked Romance\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 2:
            p("You picked Fiction\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 3:
            p("You picked Non-Fiction\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 4:
            p("You picked Science Fiction\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 5:
            p("You picked Horror\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 6:
            p("You picked Teen Fiction\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 7:
            p("You picked LGBTQ+\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 8:
            p("You picked Fantasy\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 9:
            p("You picked New Adult\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        case 10:
            p("You picked Poetry\n");
            p("You have a nice taste in Genre, %s !\n\n", uname);
            break;
        default:
            p("\nIncorrect Input! Please try again...\n\n");
            p("==============================================================================================\n\n");
            goto again;
    }

    p("==============================================================================================\n");
    p("REQUEST ONE(1) BOOK (According to Genre): ");
    s(" %[^\n]", &book);
    system("cls");
    row:
    p("\n==============================================================================================\n\n");
    p("You requested for %s.", book);
    p("\nAre you willing to donate a new book(s) in 'Whalien 52 Cafe' in exchange of '%s'? (Y or N): ", book);
    s("%s", &ans);
    if (ans == 'Y' || ans == 'y'){
        system("cls");
        p("\n==============================================================================================\n\n");
        p("    Congratulations, %s! Please, wait for our notice that we will sent on \n    your email (%s) within three(3) days. \n\n\n", uname, email);
        p("     THANK YOU FOR TRYING THIS PROGRAM! \n\n    Please, visit us again ^^\n");
        p("\n==============================================================================================\n\n");
        return 0;
    }else if(ans == 'N' || ans == 'n'){
        system("cls");
        p("\n===================================================================================================\n\n");
        p("Sorry, but %s is required to donate their own book before acquiring new one. \n\n", uname);
        p("\n===================================================================================================\n\n");
        isapa:
        p("Would you still like to continue? (Y or N): ");
        s("%s", &sag);
        if(sag == 'Y' || sag == 'y'){
            goto row;
        }
        else if(sag == 'N' || sag == 'n'){
            system("cls");
            p("\n\n==============================================================================================\n\n");
            p("     THANK YOU FOR TRYING THIS PROGRAM! \n\n    Please, visit us again ^^\n\n");
            p("==============================================================================================\n\n\n");
            return 0;
        }else{
            system("cls");
            p("\n==============================================================================================\n\n");
            p("INVALID INPUT! Please, try again...\n\n");
            goto isapa;
        }
    }else{
        system("cls");
        p("\n==============================================================================================\n\n");
        p("\nWARNING! \n\n Invalid Input. Please, try again...\n\n");
        goto row;
    }
}
