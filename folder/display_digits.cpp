// To print the digits of the numbers 
// in reverse order and in normal order

// in reverse

// while(n!=0)
//  {
//  r=n%10;
//  n=n/10;
//  cout<<r<<" ";
//  }
//  cout<<endl;


#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int n, r, i=0, j=0;
    int arr[MAX]={0};

    cout<<"Enter the number to display as digits\n";
    cin>>n;

    while (n!=0)
    {

        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }

    for (j=i-1;j>-1; j--)
    {
        cout<<arr[j]<<"\n";
    }
    return 0;
}