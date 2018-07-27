/*#############################################################################
    This Program calculates the collatz sequence for any number input.

    Author: Vaughn Sander
    Date: 26/07/2018

*/
//#include "main.h"
#include <stdio.h>
#include <stdlib.h>

//========== init functions ===================
int Find_Collatz(int c);
//=============================================

//========== Global Variables =================
int cnt = 0;
//=============================================

int main()
{
   int C;

   scanf("%d",&C);

    while(C != 1)
    {
        C = Find_Collatz(C);
        printf("%d", C);
    }
   //printf(“%d”, );
   return 0;
}

int Find_Collatz(int c)
{
    if((c%2) == 0) //check if the current number is even of odd
    {
        c=c/2;
    }else
     {
        c=3*c+1;
     }

   //cnt++;
   return c;
}
