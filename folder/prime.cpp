#include <iostream>
using namespace std;
int main()
{
    int i, number;
    // enter the number to check if it is a prime number ;

    cin >> number;
    int count = 0;
    for (i = 1; i <= number; i++)
        if (number % i == 0)
            count++;
    if (count == 2)
        cout << "Prime Number\n";
    else
        cout << "Not a Prime Number\n";

    return 0;
}