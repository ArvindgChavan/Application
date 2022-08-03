#include<iostream>
using namespace std;
class number
{
    public:

int Fact(int iNo)
{   int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iFact*= iCnt;//iFact=iFact * iCnt;
    }
    return iFact;
}
};

int main()
{
    number nobj;

    int iValue=0;
    int iRet=0;

   cout<<"Enter number \n";
    cin>>iValue;

    iRet=nobj.Fact(iValue);

    cout<<"Fact is :"<<iRet<<endl;
    return 0;
}