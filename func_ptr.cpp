#include<iostream>
using namespace std;

void display()
{
    cout<<"hello";
}

int main()
{
    void (*fp)();
    fp=display;
    display();
    return 0;
}