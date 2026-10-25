
#include<stdio.h>
#include<stdlib.h>

int SumFactor(int iNo)
{
    int iCnt=0,iSum=0;


    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
       if((iNo%iCnt)==0)
       {
           iSum=iSum+iCnt;
       }
    }
    return iSum;
}





int main()
{
    int iValues=0,iRet=0;
    int iCnt=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);
    
   

   iRet=SumFactor(iValues);

   
   printf("Summation factor:%d\n",iRet);

    return EXIT_SUCCESS;
}

// Time complexity : O(N/2)