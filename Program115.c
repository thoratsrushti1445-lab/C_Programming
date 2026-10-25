#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt=0;
  int bFlag=false;

  for (iCnt=2;bFlag=2,iCnt <= iNo/2;iCnt++)
  {
    if((iNo % iCnt)==0)
    {
      bFlag=false;
      break;

    }
  }
   return bFlag;
  }




int main(void)
{
   int iValue=0;
   bool bRet=false;

   printf("Enter Number :\n");
   scanf("%d",&iValue);


  bRet= CheckPrime(iValue);

  if(bRet) 
  {
    printf("it is prime number\n");
  }
  else
  {
    printf("it is not a prime number");
  }

    return EXIT_SUCCESS;
}