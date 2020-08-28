#include<iostream>
using namespace std;


template<class T>
T maxim(T a, T b)
{
    return a>b?a:b;
}

// using of the above template for the below type specific functions

// int maxim(int a,int b)
// {
//     return a>b?a:b;
// }

// float maxim(float a, float b)
// {
//     return a>b?a:b;
// }

int main()
{
    cout<<maxim(12,14)<<endl;
    return 0;
}