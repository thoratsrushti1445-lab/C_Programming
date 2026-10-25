

#include<stdio.h>
 #include<stdlib.h>


 
 float AverageDigit(int iNo)
 {
    int iDigit=0,iSum=0,iCount=0;
    float fAvg=0.0f;
    if(iNo < 0)
    {
        iNo=-iNo;

    }
    while(iNo!=0)
    {
      iDigit=iNo%10;
       iCount++;
      iSum=iSum+iDigit;
      iNo=iNo/10;
    }
    fAvg=(float)iSum/(float)iCount; //need of typecasting
     return fAvg;


 }

 int main()
 {
    int iValue=0;
     float fRet=0.0f;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    
    fRet=AverageDigit(iValue);
    printf("Average of digit %2f",fRet);
    return EXIT_SUCCESS;
 }