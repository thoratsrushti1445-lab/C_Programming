
#include<stdio.h>
#include<stdlib.h>



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



   


    return EXIT_SUCCESS;
}