///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckNumber
//  Description    :    Accept integer from user and determines whether the entered number is positive negative or zero
//  Input          :    Integer
//  Output         :    String 
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is positive");
    }
    else if (iNo < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is Zero");
    }
}
int main()
    {
        int iValue = 0;

        printf("Enter a number: ");
        scanf("%d",&iValue);

        CheckNumber(iValue);
        
        return EXIT_SUCCESS;
    }
