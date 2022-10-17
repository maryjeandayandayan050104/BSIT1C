
/*

PATTERN USING C ( ^ ^)

*/








//===============================================


// A LOOP INSIDE A LOOP = NESTED LOOP 


// This will display a BLOCK of stars
// (6) six rows and (5) five lines of stars


/*#include <stdio.h>

int main () {

   for(int j = 1; j <= 6; j++){ // OUTER LOOP. This line is the rows
      for (int i = 1; i <= 5; i++){ // INNER LOOP. This line is the column
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}*/

//===============================================


// This will display a block of stars, depends on the user

/*#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= rows; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
} */

//===============================================



// This will print a half pyramid.

/*#include <stdio.h>

int main () {

   int i, j;

   for(i = 1; i <= 10; i++){
      for(j = 1; j <= i; j++ ){
         printf("* ");
      }
      printf("\n");
   }

   return 0;
} */

//===============================================



// This will display a half pyramid but inversely.


// VERSION 2.0

/*#include <stdio.h>

int main () {

   int i, j;

   for(i = 1; i <= 5; i++){
      // true
      for(j = 5; j >= i; j--){
         printf("* ");
      }
      printf("\n");
   }

   return 0;
} */



// VERSION 2.1

/*#include <stdio.h>

int main () {

   int i, j;

   for(i = 5; i >= 1; i--){
      for(j = 1; j <= i; j++){
         printf("* ");
      }
      printf("\n");
   }

   return 0;
} */

//===============================================

// This will display a triangle from the right
// OR the pyramid itself just include a space LOL


/*#include<stdio.h>

int main () {

   int o, p;
   char rows;

   printf("Enter number of rows: ");
   scanf("%d", &rows);

   for(o = 0; o <= rows; o++){
      for(p = 1; p <= rows; p++){
         if((o + p) <= rows)
            printf(" ");
         else
            printf("*");
         }
      printf("\n"); 
   }

   return 0;
} */

//===============================================

// This will display a pyramid pattern


/*#include <stdio.h>

int main () {

   int one, piece, world;
   char k;

   printf("Enter number: ");
   scanf("%d", &k);

   for(piece = 1; piece <= k; piece++){
      for(one = 1; one <= (k-piece); one++){
         printf(" ");
      }
      for(world = 1; world <= piece; world++){
         printf("* ");
      }
      printf("\n");
   }

   return 0;
}*/


//===============================================