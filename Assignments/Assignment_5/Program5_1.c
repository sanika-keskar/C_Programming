/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    FindGreatest
//  Description    :    Find the Greatest of Three Numbers
//  Input          :    Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        printf("First Number is Greater");
    }
    else if ((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        printf("Second Number is Greater");
    }
    else
    {
        printf("Third Number is Greater");
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three Numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}