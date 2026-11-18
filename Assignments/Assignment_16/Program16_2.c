#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int i = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(iCnt = 0; iCnt < iCol; iCnt++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",'A' + iCnt);
            }
            else
            {
                printf("%c\t",'a' + iCnt);
            }
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