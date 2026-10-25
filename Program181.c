#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNo)
{
    for (int iCnt=0;iCnt<iNo;iCnt++)
        {
            printf("*\t");
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