import java.util.Scanner;
class Program59
{
   
    public static void main(String A[])
    {
        Scanner scanner=new Scanner(System.in);
        int iValue=0;


       Iteration iteration=new Iteration();
       System.out.println("How many time you want to display Jay ganesh...");
       iValue=scanner.nextInt();
    
       iteration.Display(iValue);
       
    }
}
      class Iteration
      {
             public  void Display(int iNo)
           {
                    int iCnt=0;
                    // input updater
                    if(iNo <=0)
                    {
                       iNo=-iNo;
                    }
                    for(iCnt=1;iCnt<=iNo;iCnt++)
                    {
                       System.out.println("Jay Ganesh..");
                    }
           }
      }
 