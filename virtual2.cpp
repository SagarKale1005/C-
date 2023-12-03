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
};

class Derived : public Base
{
   public:
   int a,b;
   void Gun()
   {
    cout<<"inside derived gun\n";
   }
};

int main()
{
   Base *bp1=new Base;
   Derived *dp1=new Derived;
   Base *bp2 = new Derived;
  // Derived *dp2=new Base;

    return 0;

}