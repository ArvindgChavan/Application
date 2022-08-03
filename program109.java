import java.lang.*;
import java.util.*;

class Bitwise
{
   public void DisplayBinary(int iNo)
   {  
      int idigit = 0;
      while(iNo != 0)
      {
          idigit = iNo % 2;
          System.out.print(idigit);
          iNo = iNo / 2;
      }
      System.out.println();
   }
}

class program109
{
  public static void main(String arg[])
  {
     Scanner sobj = new Scanner(System.in);  

     System.out.println("Enter number");
     int value = sobj.nextInt();

     Bitwise bobj = new Bitwise();
     bobj.DisplayBinary(value);
  }
}