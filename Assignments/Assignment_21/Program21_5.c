#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int iCnt = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(iCnt = 1; iCnt <= iCol; iCnt++)
        {
            printf("%d\t",i);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}