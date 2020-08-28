#include <iostream>

using namespace std;

int main()
{
    // int a = [](int x, int y) { return x + y; }(10, 5);
    // cout << a << endl;

    int a=10;
    auto f=[&a](){cout<<a<<endl;};//a has been captured from the above declaration 
    f(); //f has the value saved in it and () is used to call the lambda expression
    a++;
    f();// while capturing the variable for the lambda expression make use of & so it captures based on the address of the variable. 
    return 0;
}