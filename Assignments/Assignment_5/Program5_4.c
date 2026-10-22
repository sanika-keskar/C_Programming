/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckMultipleDivisibility
//  Description    :    Check Divisibility by 3 and 5
//  Input          :    Integer
//  Output         :    String
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 5) == 0 && (iNo % 3)== 0)
    {
        printf("Number is Divisible by the both 5 and 3");
    }
    else
    {
        printf("Number is not Divisible by the both 5 and 3");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter a Number: \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
