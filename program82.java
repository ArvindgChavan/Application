import java.lang.*;
import java.util.*;

class ArrayX
{
  private int Arr[];

  public ArrayX(int iNo)
  {
    Arr = new int[iNo];
  }
  public void Accept()
  {  
    int iCnt = 0;
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the values:");

    for(iCnt=0;iCnt<Arr.length;iCnt++)
    {
      Arr[iCnt] = sobj.nextInt();
    }
  }
  public void Display()
  {
    int iCnt = 0;
    System.out.println("Enter of array are :");
    for(iCnt=0;iCnt< Arr.length;iCnt++)
    {
      System.out.println(Arr[iCnt]);
    }
  }
  public int Summation()
  {  
    int iCnt = 0,iSum=0; 
     for(iCnt=0;iCnt< Arr.length;iCnt++)
     {
       iSum=iSum + Arr[iCnt];
     }
     return iSum ;
  }
}
class program82
{
  public static void main(String arg[])
  {
    int iRet=0;
    Scanner sobj = new Scanner(System.in);
    int iLength = 0;
    System.out.println("Enter the value for constructor");
    iLength = sobj.nextInt();
     
     ArrayX obj = new ArrayX(iLength);

     obj.Accept();
     obj.Display();

     iRet= obj.Summation();
     System.out.println("Addition is :"+iRet);


    System.out.println("Arvind");
  }
}