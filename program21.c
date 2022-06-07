#include<stdio.h>
#include<stdbool.h>

bool chkEven(int iNo)
{
  if((iNo % 2)==0)
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

 printf("Enter number\n");
 scanf("%d",&iValue);

 bRet=chkEven(iValue);
  if(bRet==true)
   {
   printf("%d is even number\n",iValue);
   }
   else
   {
     printf("%d id odd number\n",iValue);
    }
  return 0;
}