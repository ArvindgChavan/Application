#include<stdio.h>
#include<stdlib.h>
int Sumation(int Arr[],int iSize)
{   
  int iCnt =0 ,iSum=0;
   for(iCnt=0;iCnt<=iSize;iCnt++)
   {
     iSum =  iSum + Arr[iCnt];
   }
   return iSum;
}
int main()
{
  int iLength;
  int ivalue=0,iCnt=0,iRet=0;
  int *ptr=NULL;

  printf("Enter numbert");
  scanf("%d",&iLength);

  ptr=(int *)malloc(sizeof(int)* iLength);

  printf("Enter the values of array \n");

  for(iCnt=0;iCnt<=iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  iRet = Sumation(ptr,iLength);
  printf("Addition is : %d\n",iRet);

  free(ptr);
  return 0;
}
