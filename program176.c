

#include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 
    bool CheckPallindrome(int iNo)
    {
        int iDigit=0,iRev=0;

       // updater chi garaj nhi ye
        while(iNo !=0)
        {
            iDigit=iNo%10;
            iRev=(iRev*10)+iDigit;
            iNo=iNo/10;
        }
        if(iRev==iNo) //issue wala problem ahe 
        {
            return true;
            
        }
        else
        {
            return false;
        }
    
    }



 
 

 int main()
 {
    int iValue=0;
    bool bRet=false;
     

    printf("enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckPallindrome(iValue);

    if(bRet==true)
    {
      printf("Number is pallindrome ");
    }
    else
    { 
        printf("Number is not pallindrome");

    }

     

    return EXIT_SUCCESS;
 }