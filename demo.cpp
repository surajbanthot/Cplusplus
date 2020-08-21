#include <iostream>
using namespace std;
int main()
{
    float A[] = {2.5F, 5.6F, 9, 8, 7};
    for (auto x : A)
    {
        cout << x << "\n";
    }
    return 0;
}