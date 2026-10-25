

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

 
 float AverageDigit(int iTotal,int iFrequency)
 {
      float fAns=0.0f;

      fAns=(float)iTotal/(float)iFrequency;
      return fAns;
 }

 int main()
 {
    int iValue=0;
     float fAvg=0.0f;

     int iSum=0;
     int iCount=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

     iSum=SumDigit(iValue);
   iCount=CountDigit(iValue);
    
    fAvg=AverageDigit(iSum,iCount);

    printf("Number of digit:%d\n",iCount);
    printf("Summation of Digit :%d\n",iSum);
    printf("Average of digit %2f",fAvg);
    return EXIT_SUCCESS;
 }