// GCD of two numbers

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter two Numbers\n";
    cin >> n >> m;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    cout<<"The GCD of two numbers are "<<m;
    return 0;
}