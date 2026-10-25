

#include<stdio.h>
 #include<stdlib.h>
 int CountDigit(int iNo)
 {
    int iCount=0;
    int iDigit=0;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        
        iDigit=iNo%10;
        iCount++;

        iNo=iNo/10;
        
    }
    return iCount;
    

 }

int SumDigit(int iNo)
 {
    int iSum=0;
    int iDigit=0;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        
        iDigit=iNo%10;
        iSum=iSum+iDigit;

        iNo=iNo/10;
    }
    return iSum;
    

 }

 
 float AverageDigit(int iNo)
 {
    int iDigit=0,iSum=0,iCount=0;
    float fAvg=0.0f;
    if(iNo < 0)
    {
        iNo=-iNo;

    }
   iSum=SumDigit(iNo);
   iCount=CountDigit(iNo);
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