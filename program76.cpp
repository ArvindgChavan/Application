#include<iostream>
using namespace std;

int Fact(int iNo)
{   int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iFact*= iCnt;//iFact=iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;

   cout<<"Enter number \n";
    cin>>iValue;

    iRet=Fact(iValue);
    cout<<"Fact is :"<<iRet<<endl;
    return 0;
}