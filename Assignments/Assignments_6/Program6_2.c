/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckAdmission
//  Description    :    Check Admission Eligibility
//  Input          :    integer
//  Output         :    String
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(((fMarks < 0) || (fMarks > 100) || (iAge < 0)))
    {
        printf("Invalid Input");
    }
    else if ((fMarks >= 60) && (iAge >= 17))
    {
        printf("The Student is eligible for Admission");
    }
    else
    {
        printf("The Student is Not eligible for Admission");
    }
}
int main()
{

    float fValue = 0.0f;
    int iValue = 0;

    printf("Enter the Marks: \n");
    scanf("%f",&fValue);

    printf("Enter the Age: \n");
    scanf("%d",&iValue);

    CheckAdmission(fValue,iValue);

    return EXIT_SUCCESS;
}