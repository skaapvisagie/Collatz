/*#############################################################################
    This Program calculates the collatz sequence for any number input.

    Author: Vaughn Sander
    Date: 26/07/2018

*/
#include <stdio.h>
#include <stdlib.h>

//========== init functions ===================
int Find_Collatz(int _num);
//=============================================

//========== Global Variables =================
int i = 0;
//=============================================

int main()
{
   int Num;

   scanf("%d",&Num);

    while(Num != 1)
    {
        Num = Find_Collatz(Num);
        printf("%d ", Num);
    }
   //printf(“%d”, );
   return 0;
}

int Find_Collatz(int _num)
{
    if((_num%2) == 0) //check if the current number is even of odd
    {
        _num = _num/2;
    }else
     {
        _num = 3*_num + 1;
     }

   //cnt++;
   return _num;
}
