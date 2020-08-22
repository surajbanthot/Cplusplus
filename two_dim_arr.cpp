#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Dimensions of the Array\n";
    cin >> m >> n;
    int A[m][n] = {0};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>A[i][j];
    //     }
    // }

    // to read elements to a array using for each;

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }

    //   for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Using Auto and reference to get the contents into a single variable x and later to y;
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
    return 0;
}