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
   Base bobj;
   Derived dobj;

   cout<<sizeof(bobj)<<"\n";
   cout<<sizeof(dobj)<<"\n";

   bobj.Fun();

   dobj.Gun();
   dobj.Gun();

    return 0;

}