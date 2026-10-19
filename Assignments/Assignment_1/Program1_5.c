//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Accept
//  Description    :    Accept one Number from user and print that number of * on Screen 
//  Input          :    Integer 
//  Output         :    Displays * characters 
//  Author         :    Keskar Sanika Subhash
//  Date           :    19/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}