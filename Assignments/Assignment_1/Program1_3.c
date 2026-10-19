//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    Display
//  Description    :   Display numbers from 5 to 1 
//  Input          :    Integer , Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    19/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}