#include<iostream>
using namespace std;

class Base 
{
   public:
   int i,j,k;
   void Fun()
   {
    cout<<"inside base fun\n";
   }
   void Gun()
   {
    cout<<"inside base Gun \n";
   }
   void Sun()
   {
    cout<<"inside base Sun\n";
   }
   void Run()
   {
    cout<<"inside base Run\n";
   }
};

class Derived : public Base
{
   public:
   int a,b;
   void Gun() 
   {
    cout<<"inside derived gun\n";
   }
   void Run()
   {
    cout<<"inside derived Run\n";
   }
};

int main()
{
   Base *bp =new Base;
   bp->Fun();
   bp->Gun();
   bp->Sun();
   bp->Run();
    return 0;

}