/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckDivisibility
//  Description    :    Check Divisibility by 5 
//  Input          :    Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}