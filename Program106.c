
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt=0,iSum=0;
    
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
       if((iNo%iCnt)==0)
       {
           iSum=iSum+iCnt;
       }
    }
    return (iSum==iNo);
}  





int main()
{
    int iValues=0;
    bool bRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);
    
   
    bRet= CheckPerfect(iValues);

    if(bRet == true)
    {
        printf("It is Perfect Number\n");
    }
    else
    {
        printf("it is not perfect number\n");
    }

    return EXIT_SUCCESS;
}

// Time complexity : O(N/2)