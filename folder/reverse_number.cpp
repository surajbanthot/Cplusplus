#include<iostream>

using namespace std;

int main()
{
    int n,r, rev=0;
    cout<<"Enter the Number which needs to be reversed\n";
    cin>>n;
    cout<<endl;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        rev=rev*10+r;

    }
    cout<<"Reverse of the number "<<rev;
    return 0;
}