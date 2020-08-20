#include <iostream>

using namespace std;

int binarysearch(int a[], int low, int high, int key)
{
    int mid;
    if (high >= low)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            return binarysearch(a, low, mid - 1, key);
        return binarysearch(a, mid + 1, high, key);
    }
    return -1;
}

int main(void)
{
    int sizeofarray;
    cout << "Enter the size of the array \n";
    cin >> sizeofarray;
    int a[sizeofarray];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < a[sizeofarray-1]; i++)
        cin >> a[i];
    int key;
    cout << "Enter the key element to be searched in an array \n";
    cin >> key;
    int low = a[0], high = a[sizeofarray - 1];
    int result = binarysearch(a, low, high, key);
    (result == -1) ? cout << "Element is not present in the array\n" : cout << "Element is present at index " << result;
    return 0;
}

