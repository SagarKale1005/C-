#include<iostream>
using namespace std;

class Demo
{
    public:
     int x,y;

     Demo()
     {
        cout<<"inside Demo constructor\n";
        x=10;
        y=20;
     }
     ~Demo()
     {
        cout<<"inside Demo destructor\n";
     }
     void fun()
     {
        cout<<"inside fun of Demo\n";
     }
};

class Hello : public Demo
{
   public:
   int a,b,c;
   Hello()
   {
    cout<<"inside Hello constructor\n";
     a=30;
     b=40;
     c=50;
   }
   ~Hello()
   {
    cout<<"inside Hello destructor\n";
   }
   void gun()
   {
    cout<<"inside gun of hello\n";
   }
};
int main()
{
   Hello hobj;

   cout<<sizeof(hobj)<<" bytes \n";  

   cout<<hobj.x <<"\n";
   cout<<hobj.y <<"\n";
   cout<<hobj.a <<"\n";
   cout<<hobj.b <<"\n";
   cout<<hobj.c <<"\n";

   hobj.fun();
   hobj.gun();
   
    return 0;
}