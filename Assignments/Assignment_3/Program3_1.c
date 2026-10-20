///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    PrintEven
//  Description    :    Accept one number from user and print that number of even numbers on screen
//  Input          :    Integer 
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    20/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}