#include<iostream>
using namespace std;
class number
{
    private :
      int iNo;

    public:
    void Accept()
    {
        cout<<"Enter the value:"<<endl;
        cin>>this -> iNo;
    }
    void Display()
    {
        cout<<"value is :"<<this ->iNo<<endl;
    }
int Fact()
{ 
      int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact*= iCnt;//iFact=iFact * iCnt;
    }
    return iFact;
}
};

int main()
{
    number nobj1;
    number nobj2;
    int iRet = 0;
   
   
    nobj1.Accept();
    nobj1.Display();
    iRet = nobj1.Fact();
    cout<<"Fact is :"<<iRet<<endl;

    nobj2.Accept();
    nobj2.Display();
    iRet = nobj2.Fact();
    cout<<"Fact is :"<<iRet<<endl;

    return 0;
}