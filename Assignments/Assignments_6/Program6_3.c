/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CalculateDiscount
//  Description    :    Calculate Shopping Discount
//  Input          :    Integer
//  Output         :    Float
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid purchase amount");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    if(fAmount >= 0)
    {
        fFinalAmount = fAmount - (fAmount * fDiscount / 100);

        printf("Payable Amount = %
            f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

