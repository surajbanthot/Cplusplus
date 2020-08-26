#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor of Demo"<<endl;
    }
};

void fun()
{
    Demo *p=new Demo(); //heap memory has to be explicitly deleted if new is created. 
    delete p;
}

int main()
{
    fun();
}