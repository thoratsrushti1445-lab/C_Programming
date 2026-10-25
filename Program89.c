
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}





int main()
{
    int iValues=0;
    int iCnt=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);
    
    for(iCnt=1;iCnt<=iValues;iCnt++)
    {
        printf("%d\n",iCnt);
    }

   Display(iValues);

   


    return EXIT_SUCCESS;
}