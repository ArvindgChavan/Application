import java.lang.*;
import java.util.*;

class Number 
{
  private int iNo;

  public void Accept()
  {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter number:");
      this.iNo = sobj.nextInt();
  }
  public void Display()
  {
    System.out.println("Value is :"+this.iNo);
  }
  public int Factorial()
  {
        int iCnt = 0;
        int iFact = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact*= iCnt;//iFact=iFact * iCnt;
    }
    return iFact;
  }
}

class program79
{
    public static void main(String arg[])
    {
         Number nobj = new Number();
         int iRet = 0;

         nobj.Accept();
         nobj.Display();

         iRet = nobj.Factorial();
         System.out.println("Factroil is : "+iRet);
    }
}