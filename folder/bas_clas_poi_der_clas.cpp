#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "Fun1 of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "Fun2 of Derived" << endl;
    }
};

int main()
{
    Derived d;
    
    d.fun1();
    d.fun2();

    Base *ptr=&d;
    ptr->fun1();
    // ptr->fun2(); error showing the base class has no fun2 as the pointer is just pointing to base class and not the derived and fun2 being the member of derived class
    return 0;
}