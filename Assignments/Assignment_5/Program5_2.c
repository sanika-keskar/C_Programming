/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckLeapYear
//  Description    :    Check Leap year
//  Input          :    Integer
//  Output         :    String
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear % 4 == 0)
    {
        printf("This Year is Leap Year");
    }
    else
    {
        printf("This Year is not Leap Year");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Year: \n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}

