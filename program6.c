

#include<stdio.h>
//////////////////////////////////////////////////
//function name: Addition
//Description:use to perform addition of 2 number
//Inpute:integer,integer
//Output:integer
//Date:12/04/2022
//Author:Arvind Govind Chavan
/////////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{

 int iAns=0;
 iAns=iValue1+iValue2;
 return iAns; 
}
////////////////////////////////////////////////////
//write a program to perform addition of 2 number
////////////////////////////////////////////////////

int main()
{
 
 int iNo1=0;
 int iNo2=0;
 int iNo3=0;
 
printf("Enter first number\n");
scanf("%d",&iNo1);

printf("Enter second number\n");
scanf("%d",&iNo2);


 iNo3=Addition(iNo1,iNo2);

 printf("Addition is:%d\n",iNo3);

  return 0;
}

////////////////////////////////////////////////
//
//inpute:11 10
//output:21
//
////////////////////////////////////////////////