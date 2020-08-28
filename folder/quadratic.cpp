// Program to find the quadratic equation of the given input


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b , c, root1, root2;

    cout<<"Enter the value's for a, b , c"<<" ";
    cin>>a>>b>>c;
    root1 = (-b+(b*b-4*a*c))/(2*a);
    root2 = (-b-(b*b-4*a*c))/(2*a);
    cout<<"Roots are "<<root1<<" "<<root2;
    return 0;
}


// some bitwise operators are 
// & and
// || or
// ~ not
// << shift left by 1
// >> shift right by 1


