#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    //     int a, b, res;
    // cout<<"hello";
    // cin>>a>>b;
    // res = a+b;
    // cout<<res;
    string name;

    cout<<"May I know your Name\n";
    // while reading the string we have to use getline to read the whole line rather than a single word. 
    getline(cin, name);

    // cin>>name;

    cout<<"Name Entered is "<<name;



    return 0;
}

