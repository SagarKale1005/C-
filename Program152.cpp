// Array madhlya even integer Addition

#include<iostream>
using namespace std;

class Array
{
    private:
      int * Arr;
     int iSize;

     public:
       Array(int X)       // Parametrised constructor
       {
        iSize = X;
        Arr = new int [iSize];
       }

       ~Array()              // Destructor
       {
        delete []Arr;
       }

       void Accept()           // member function
       {
         int iCnt=0;
         cout<<"Please enter the elements :"<<endl;

         for(iCnt = 0; iCnt < iSize ; iCnt++)
         {
            cin>>Arr[iCnt];
         }
       }

       void Display()                 // member function
       {
        cout<<"Elements of array are :"<<endl;
        int iCnt =0;

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
       }

       // Logic

       int AdditionEven()
       {
        int iSum =0, iCnt= 0;

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            if((Arr[iCnt] % 2)== 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
       }

};

int main()
{
    int iLength=0;
    int iRet =0;

    cout<<"Enter thr number of elements that you want to store :"<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);    

    aobj->Accept();                     
    aobj->Display();                     

    iRet = aobj-> AdditionEven();

    cout<<"Addition of even element is :"<<iRet<<endl;
    
    delete aobj;

    return 0;
}