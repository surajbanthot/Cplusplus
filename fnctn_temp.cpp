#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b)
{
    return a>b?a:b;
}



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
    cout<<maxim(2.3,1.4)<<endl;
    return 0;
}