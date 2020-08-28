// sum of cubes of the digits of the number is same as the number is said to be a armstrong number.
#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int n, r, sum=0;
    int m;

    cout<<"Enter the number to display as digits\n";
    cin>>n;
    m = n;

    while (n!=0)
    {

        r=n%10;
        n=n/10;
        sum=sum+r*r*r;

    }
    if (sum==m)
    {
        cout<<m<<" "<< "is a armstrong number";
    }
    else
    {
        cout<<"not a armstrong number";
    }

    return 0;
}

