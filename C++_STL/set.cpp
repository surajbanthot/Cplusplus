#include<iostream>
#include<set>
#include<map>
//set:-Associate containers..Just like Maps
//only one value(key as value)
//set stores unique values and doesn't allow duplicate values to be stored 
//as an alternative we will use multiset 

using namespace std;

int main()
{
    map<int,string> mymap;

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto x:s)
    cout<<x<<endl;

    s.erase(2);

    for(auto x:s)
    cout<<x<<endl;
    
    return 0; 
}