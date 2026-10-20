///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Display
//  Description    :    Accept two numbers from user and display first number in second number of times
//  Input          :    Integer,Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    20/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
