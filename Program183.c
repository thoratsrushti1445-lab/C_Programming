#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNo)
{
    for (int iCnt=1;iCnt<iNo;iCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
}

int main()
{
    int iValue=0;
    printf("Enter the frequency:");
    scanf("%d",&iValue);

      Pattern(iValue); 

    return EXIT_SUCCESS;
}