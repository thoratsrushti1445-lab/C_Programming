/*
-----------------------------------------------
   Operation &&
-----------------------------------------------
Result1     Result2      finalResult  
-----------------------------------------------
TRUE        TRUE           TRUE
TRUE       FALSE           FALSE
FALSE      TRUE            FALSE   //Short circuit honar karn pahilch check karnar 
FALSE      FALSE           FALSE   //Short circuit honar karn pahilch check karnar 
----------------------------------------------
*/



#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
   if((iNo % 3)==0 && (iNo % 5)==0)
   {
     printf("number is Divisible by 3 and 5");
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