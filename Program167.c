//input:6457


#include<stdio.h>
 #include<stdlib.h>


 

 int main()
 {
    int iValue=0;
     int iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    
    iRet=CountDigit(iValue);
    printf("Number of digit:%d",iRet);
    return EXIT_SUCCESS;
 }