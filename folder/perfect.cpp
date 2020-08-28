#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cin >> number;
    for (int i = 1; i < number; i++)
        if (number % i == 0)
            sum = sum + i;
    if (sum == number)
        cout <<sum<<" true\n";
    else
        cout <<sum<< " false\n";
    return 0;
    // commit check
}