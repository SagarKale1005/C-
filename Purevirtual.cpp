#include<iostream>
using namespace std;
class Base
{
   public:
   int i,j,k;

   void Fun()                              // concrete method
   {
    cout<<"base fun\n";
   }
   virtual void gun()                      // concrete method
   {
    cout<<"base gun\n";
   } 
   virtual int Addition(int no1 , int no2)=0;   //abstract method

};
class Derived : public Base
{
    public:
    int a,b;

    void gun()
    {
        cout<<"Derived gun\n";      // concrete method
    }
    virtual void Sun()              // concrete method
    {
        cout<<"Derived sun\n";
    }
    int Addition(int no1,int no2)   //concrete method
    {
        return no1+no2;
    }

};

int main()
{
    Base bobj;
    
    Base *bp=new Derived;
    bp->Fun();
    bp->gun();
    int Ret=0;
    Ret=bp->Addition(10,11);
    cout<<"Addition is: "<<Ret<<"\n";

    return 0;
}