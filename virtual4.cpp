#include<iostream>
using namespace std;

class Base 
{
   public:
   int i,j,k;
    virtual  void Fun()  //1000
   {
    cout<<"inside base fun\n";
   }
   virtual void Gun() //2000
   {
    cout<<"inside base Gun \n";
   }
   void Sun()  //3000
   {
    cout<<"inside base Sun\n";
   }
   void Run() //4000
   {
    cout<<"inside base Run\n";
   }
};

class Derived : public Base
{
   public:
   int a,b;
   virtual void Gun()  //5000
   {
    cout<<"inside derived gun\n";
   } 
   void Run()  //6000
   {
    cout<<"inside derived Run\n";
   }
   virtual void Mun()  //7000
   {
    cout<<"inside derived Mun\n";
   }
};

int main()
{
    cout<<sizeof(Base)<<"\n";   //12
    cout<<sizeof(Derived)<<"\n";  //20
   Base *bp =new Base;
   bp->Fun();
   bp->Gun();
   bp->Sun();
   bp->Run();
  // bp->Mun();  //Error
    return 0;

}