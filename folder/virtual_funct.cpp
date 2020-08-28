#include <iostream>
using namespace std;

class Base
{
public:
     virtual void fun()  //when made virtual and pointer of base won't affect the function overriding 
    {
        cout << "Fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived" << endl;
    }
};

int main()
{
    Derived d;
    d.fun();
    Base *ptr=&d;
    ptr->fun();
    return 0;
}