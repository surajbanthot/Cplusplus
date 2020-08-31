#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (auto x : v)
        cout << x << endl;

    cout << "*********";
    cout << endl;
    // for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    // {

    //     cout << *(itr) << endl;
    // }

    // v.erase(v.begin());
    // cout << endl;
    // for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    // {

    //     cout << *(itr) << endl;
    // }

    // v.insert(v.begin(), 300);

    // cout << endl;

    // v.insert(v.begin()+1,2,10);

    // vector<int> copy(2,50);
    // v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size() << endl;

    v.pop_back();

    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {

        cout << *(itr) << endl;
    }

    v.clear();

    cout << v.size();

    







    return 0;
}