#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Dimensions of the Matrix\n";
    cin >> m >> n;
    int A[m][n] = {0};
    int B[m][n] = {0};
    int C[m][n] = {0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>B[i][j];
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        cout<<endl;
    }
    for (auto &x : C)
    {
        for (auto &y : x)
        {
            cout << y<<" ";
        }
        cout << endl;
    }
    return 0;
}