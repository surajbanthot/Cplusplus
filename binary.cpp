// Binary Search using iterative method. 

#include <iostream>
#include <stdlib.h>

#define max 100

using namespace std;

int main()
{
    int sizeofarray;
    cout << "Enter the size of the Array\n";
    cin >> sizeofarray;
    cout << endl;
    int a[sizeofarray - 1];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i <= sizeofarray - 1; i++)
    {
        cin >> a[i];
    }
    int low = a[0], high = a[sizeofarray - 1], key;
    cout << "\n Enter the key to be found \n";
    cin >> key;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            cout << "Found at " << mid;
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Element Not found \n";
    return 0;
}