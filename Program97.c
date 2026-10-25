
#include<stdio.h>
#include<stdlib.h>

 unsigned long long Factorial (int iNo)
{
    int iCnt=0;
    unsigned long long iFact=0;

    for(iCnt=1,iFact=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}





int main()
{
    int iValues=0;
    unsigned long long iRet=0;
    int iCnt=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);

  iRet=Factorial(iValues);
   
printf("Factorial is :%lld\n",iRet);
   


    return EXIT_SUCCESS;
}