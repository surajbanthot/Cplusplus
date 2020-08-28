#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the Number to be checked for a Factor\n";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        cout<<i<<"\n";

    }
    return 0;
}