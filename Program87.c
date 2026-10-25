
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
   if((iNo % 3)==0 )
   {
    if((iNo % 5)==0)
     {
     printf("number is Divisible  ");
      }
   else
   {
     printf("it is not divisible");
   }
}
    else
   {
      printf("Number is not divisible by 3 and 5");
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