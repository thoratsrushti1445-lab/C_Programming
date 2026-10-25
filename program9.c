
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////
//
//function name:Addition
//intput :    Integer,Integer
//output :  Integer
//Description: Performs Addition 
//date: 04/10/2026
//author:Srushti Ravindra Thorat
///////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////
int  Addition (
                int iNo1,  // first input
                int iNo2   // second input
              )
{
    int iAns=0;
    iAns=iNo1+iNo2;     //Business logic
    return iAns;
}
///////////////////////////////////////////////////////////
//
//
//Entry Point of the application
//
//
//
///////////////////////////////////////////////////////////


int main()
{
   int iValue1=0,iValue2=0,iResult=0;
   printf("Enter first No:\n");
   scanf("%d",&iValue1);
   printf("Enter second Number:\n");
   scanf("%d",&iValue2);

   iResult=Addition(iValue1,iValue2);
   
   printf("Addition is:%d",iResult);
 



    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////
// 
// step 5: test the program 
//
// tested test case
//------------------------------------------------------------------------------
//     Input1              Input2                 output
// ---------------------------------------------------------------------------
//      10                 11                      21
//       11                0                       11
//       
//
//
//
//
//
//
//
//
//
//