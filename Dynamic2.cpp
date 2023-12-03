#include<iostream>
#include<iostream>
using namespace std;


class Damo
{
    public:
    int i,j,k;
    Demo()
    {
        cout<<"inside constructor\n";

    }
    ~Demo()
    {
        cout<<"inside destrcutor\n";
    }
    void Display()
    {
        cout<<"inside display\n";
    }
};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo *ptr = new Demo;
    ptr->Display();
    delete ptr;

    return 0;
}