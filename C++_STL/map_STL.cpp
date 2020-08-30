#include<iostream>
#include<map>
#include<unordered_map>

// Maps:

// In maps the sorting takes place on the order of the key
//unordered map will update the contents of a key to a latest assigned value 
//unordered map will not store the keys and values in a ordered list 
//algorithm used for maps is a balanced binary tree


using namespace std;

int main()
{
    // pair<int,int> p=make_pair(10,20);
    // cout<<p.first<<"-"<<p.second<<endl;

    map<int,int> mp;
    mp[0]=10;
    mp[1]=20;
    mp[2]=30;

    mp.insert(make_pair(3,40));


    //iterator
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

    return 0;
}