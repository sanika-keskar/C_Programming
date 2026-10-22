//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name  :    CheckVotingEligibility
//  Description    :    Check Voting Eligibility
//  Input          :    Integer
//  Output         :    Integer
//  Author         :    Keskar Sanika Subhash
//  Date           :    22/10/2026
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void CheckVotingEligibility(int iAge)
{
    
    if(iAge >= 18)
    {
        printf("Person is eligible to vote");
    }
    else
    {
        printf("Person is not eligible to vote");
    }
}
int main()
{
    int iValue =0;

    printf("Enter the Age: \n");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}