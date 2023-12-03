// Problems on Digit 

#include<iostream>
using namespace std;

class Digit
{
    private:
    int iNo;

    public:
    Digit(int x)
    {
        iNo=x;
    }


    // Logics
};

int main()
{

    int iValue=0;
    int iRet=0;

    cout<<"Enter the number :"<<endl;
    cin>>iValue;

    Digit nobj(iValue);

    return 0;
}