#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int iCnt = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(iCnt = 0; iCnt < iCol; iCnt++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",'a' + iCnt);
            }
            else
            {
                printf("%d\t",iCnt + 1);
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