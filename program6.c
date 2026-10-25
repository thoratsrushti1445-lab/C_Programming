/*
    step 1: understand the problem statement 
    step 2: write the algorithm
    step 3: decide the programming language
    step 4: write the program 
    step 5: test the program
*/

//////////////////////////////////////////////////////////////////
// 
// step 1: understand the problem statement
//          user is going to enter any 2 integers and we have to perform addition
//
////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
// 
// step 2: write the algorithm
/*  START
         Accept first no as NO1
         Accept second no as No2
         create the variable as ans to store the result
         perfrom  the addition and store into ans
         display the result from ans
    END


*/
////////////////////////////////////////////////////////////////////////
//
//  step 3: decide the programming language
//          we select c programming
///////////////////////////////////////////////////////////////////////
//
// step 4: write the program
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>
int  Addition (int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;     //Business logic
    return iAns;
}

int main()
{
   int iValue1=0,iValue2=0,iResult=0;
   printf("Enter first No:\n");
   scanf("%d",&iValue1);
   printf("Enter second Number:\n");
   scanf("%d",&iValue2);

   iResult=Addition(iValue1,iValue2);
   
   printf("Addition is:%d",iResult);
 



    return 0;
}