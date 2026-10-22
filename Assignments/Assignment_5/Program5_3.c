/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    DisplayGrade
//  Description    :    Calculate Student Grade
//  Input          :    Integer
//  Output         :    Character
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplayGrade(float fMarks)
{
    if((fMarks >=90) && (fMarks <= 100))
    {
        printf("Grade:A");
    }
    else if ((fMarks >=75) && (fMarks <= 89))
    {
        printf("Grade:B");
    }
    else if((fMarks >=60) && (fMarks <= 74))
    {
        printf("Grade:C");
    }
    else if((fMarks >=40) && (fMarks <= 59))
    {
        printf("Grade:D");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    float fValue = 0.0f;
    printf("Enter the Marks: \n");
    scanf("%f",&fValue);

    DisplayGrade(fValue);

    return EXIT_SUCCESS;
}