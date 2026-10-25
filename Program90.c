
#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt=0,iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}





int main()
{
    int iValues=0,iRet=0;
    int iCnt=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);

  iRet=Summation(iValues);
   
printf("summation is :%d\n",iRet);
   


    return EXIT_SUCCESS;
}