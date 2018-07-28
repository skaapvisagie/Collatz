/*#############################################################################
    This Program calculates the collatz sequence for any number input.
    The Max size of any number in the sequence must be
    Author: Vaughn Sander
    Date: 26/07/2018

#############################################################################*/

#include <stdio.h>
#include <stdlib.h>


//========== init functions ===================

/** Brief:
*Find_Collatz recursively calculates the next number in the collatz sequence to optimize processing time.
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

    //Call Collatz function to calculate and display the sequence
    Num = Find_Collatz(Num);

    printf("\n");

    system("pause"); // Pause program to view output before terminating.
   return 0;
}

int Find_Collatz(int _num)
{
    if(_num == 1) // if _num is 1 then sequence is finished and returns.
        return 1;

    if(_num%2 == 0) // See if the current number is odd or even
    {
        _num = _num/2;          // calculate next number
        printf("%d ", _num);    // display next number
        Find_Collatz(_num);
    }
    else
     {
        _num = _num*3 + 1;      // calculate next number
        printf("%d ", _num);    // display next number

        Find_Collatz(_num);
     }
}
