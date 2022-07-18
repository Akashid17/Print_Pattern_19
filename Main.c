
#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    if(iNo1 == 0 || iNo2 == 0)
    {
        if(iNo1 == iNo2)
        {
            printf("Unable to Print Pattern, Both Values are Zero\n");
            return;
        }

        if(iNo1 == 0)
        {
            printf("Unable to Print Pattern, Rows count is Zero\n");
            return;
        }
        if(iNo2 == 0)
        {
            printf("Unable to Print Pattern, Columns count is Zero\n");
            return;
        }
    }
    else
    {
        if(iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if(iNo2 < 0)
        {
            iNo2 = -iNo2;
        }

        char ch = '\0';
        int iCnt = 0;

        for(int i = 1; i <= iNo1; i++)
        {
            iCnt = 1;

            ch = 'a';

            for(int j = 0; j < iNo2; j++)
            {
                if(i % 2 != 0)
                {
                    printf("%c\t",ch++);
                }
                else
                {
                    printf("%d\t",iCnt);
                    iCnt += 2;
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Numbers of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter Numbers of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}