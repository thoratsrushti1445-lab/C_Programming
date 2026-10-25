
#include"Header.h"
int main()
{

   int iValue1=0,iValue2=0,iResult=0;

   printf("Enter first No:\n");
   if(scanf("%d",&iValue1)!=1)
   {
      fprintf(stderr,"unable to proceed as input is invalid\n");

      return EXIT_FAILURE;
   }


   printf("Enter second Number:\n");
    if(scanf("%d",&iValue2)!=1)
   {
      fprintf(stderr,"unable to proceed as input is invalid\n");

      return EXIT_FAILURE;
   }
   

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