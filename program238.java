import java.io.*;
import java.util.*;

class program238
{
  public static void main(String arg[])
  {
     Scanner sobj = new Scanner(System.in);
      
    System.out.println("Enter the string :");
    String str = sobj.nextLine();
    
    String newstr = str.replaceAll("\\s+"," "); 
    String newstr2 = newstr.trim();
    String arr[] = newstr2.split(" ");
    
    System.out.println("Number of words are:"+arr.length);
  }

}