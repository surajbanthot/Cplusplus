#include<iostream>
using namespace std;


// return by address
int * fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}


// return by reference

int & fun(int &x)
{
    return x;
}

int main()
{

    // return by address
    // int *q=fun();

    // cout<<q<<endl;
    // for(int i=0;i<5;i++)
    // cout<<q[i]<<endl;

    // return by reference

    int a=10;
    fun(a);  //here the function is placed in the main code section 

}