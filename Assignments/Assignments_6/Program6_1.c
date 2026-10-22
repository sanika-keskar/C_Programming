/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckCharacterType
//  Description    :    Identify Character Type
//  Input          :    character
//  Output         :    String
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


float CalculateElectricityBill(int iUnits)
{
    if(iUnits < 0)
    {
        return -1.0f;
    }
    else if (iUnits <= 100)
    {
        return iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        return iUnits * 7.0f;;
    }
    else
    {
        return iUnits * 10.0f;
    }
}
int main()
{
    int iValue =0;
    float fBill = 0.0f;

    printf("Enter the Units Consumed: \n"); 
    scanf("%d",&iValue);

    fBill =  CalculateElectricityBill(iValue);

    if(fBill < 0)
    {
        printf("Invalid Units are Consumed");
    }
    else
    {
        printf("Bill Amount is: %f\n",fBill);
    }


    return EXIT_SUCCESS;
}