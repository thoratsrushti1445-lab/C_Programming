#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
   if((iNo % 3)==0)
   {
     printf("number is Divisible by 3");
   }
   else
   {
      printf("Number is not divisible by 3");
   }
}

int main()
{
    int iValues=0;
    printf("Enter the number:\n");
    scanf("%d",&iValues);


   CheckDivisible(iValues);


    return EXIT_SUCCESS;
}