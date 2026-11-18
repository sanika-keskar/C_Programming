#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Value: \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}