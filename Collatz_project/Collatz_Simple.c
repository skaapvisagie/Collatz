/*#############################################################################
    This Program calculates the collatz sequence for any number input.
    The Max size of any number in the sequence must be
    Author: Vaughn Sander
    Date: 26/07/2018
	Github Repo: https://github.com/skaapvisagie/Collatz.git
#############################################################################*/

#include <stdio.h>
#include <stdlib.h>

//========== init functions ===================

/** Brief:
*Find_Collatz calculates the next number in the collatz sequence.
*The Max size of any number in the sequence must be smaller than 4 bytes (4294967295 dec).
*
*@Param _num 32bit Integer to calculate the next number in the Collatz sequence.
*
*@return next number in the Collatz sequence.
*
*/
int Find_Collatz(int _num);

//=============================================



int main()
{
   int Num;

    scanf("%d",&Num);  // get number from user
    printf("%d ", Num);// Prints the original number the user entered

    // if Num not 1 then sequence is not complete and next number of the sequence is calculated
    while(Num != 1)
    {
        Num = Find_Collatz(Num);
        printf("%d ", Num);
    }

    printf("\n");

     system("pause"); // Pause program to view output before terminating.
   return 0;
}

int Find_Collatz(int _num)
{
    if((_num%2) == 0) //check if the current number is even of odd and calculate next number.
    {
        _num = _num/2;
    }else
     {
        _num = 3*_num + 1;
     }

   return _num;
}
