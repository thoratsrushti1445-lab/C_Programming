
#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;
    printf("factors of %d are:\n",iNo);

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
       if((iNo%iCnt)==0)
       {
           printf("%d\n",iCnt);
       }
    }
}





int main()
{
    int iValues=0;
    int iCnt=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);
    
   

   DisplayFactor(iValues);

   


    return EXIT_SUCCESS;
}

// Time complexity : O(N)