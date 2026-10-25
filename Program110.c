#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt=0;
  int iSum=0;

  for (iCnt=2;iCnt <= iNo/2;iCnt++)
  {
    if((iNo % iCnt)==0)
    {
        iSum=iSum+iCnt;

    }
  }
  if(iSum==0)
  {
    return true;
  }
  else
  {
    return false;
  }
}




int main(void) //main function input ghenar nhi mhanun void lihil ahe
{
   int iValue=0;
   bool bRet=false;

   printf("Enter Number :\n");
   scanf("%d",&iValue);


  bRet= CheckPrime(iValue);

  if(bRet) // == true nhi lihil tri chalt beacause te same consider kel jat
  {
    printf("it is prime number\n");
  }
  else
  {
    printf("it is not a prime number");
  }

    return EXIT_SUCCESS;
}