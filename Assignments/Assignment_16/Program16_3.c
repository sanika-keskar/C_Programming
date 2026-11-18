#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int i = 0;

    for(i = 0; i < iRow; i++)
    {
        for(iCnt = 1; iCnt <= iCol; iCnt++)
        {
            printf("%c\t",'A' + i);
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