#include <iostream>

using namespace std;

int main()
{
    int number, remainder, reverse = 0;
    cin >> number;
    while (number != 0)
    {
        if (number % 10 != 0)
        {

            remainder = number % 10;
            reverse = reverse * 10 + remainder;
            number /= 10;
        }
    }
    cout<<reverse;

    return 0;
}