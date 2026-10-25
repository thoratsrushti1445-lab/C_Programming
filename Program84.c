#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
   if((iNo % 5)==0)
   {
     printf("number is Divisible by 5");
   }
   else
   {
      printf("Number is not divisible by 5");
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