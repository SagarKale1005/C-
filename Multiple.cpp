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

class Hello
{
   public:
   int a,b,c;
   Hello()
   {
    cout<<"inside Hello constructor\n";
     a=30;
     b=40;
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
class Marvellous : public Hello ,public Demo
{
    public:
    int p;

    Marvellous()
    {
        cout<<"inside contructor of marvellous\n";
        p=60;
    }
    ~Marvellous()
    {
        cout<<"inside destructor of marvellous\n";
    }
    void sun()
    {
        cout<<"inside sun of marvellous\n";
    }
};

int main()
{
   Marvellous mobj;

   cout<<sizeof(mobj)<<" bytes \n";  

   mobj.fun();
   mobj.gun();
   mobj.sun();
   
    return 0;
}