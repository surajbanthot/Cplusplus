#include<iostream>
#include<map>

// multimap:

// multimap allows multiple values to a single key

using namespace std;

int main()
{
    // pair<int,int> p=make_pair(10,20);
    // cout<<p.first<<"-"<<p.second<<endl;

    multimap<int,int> mp;
    // mp[0]=10;
    // mp[1]=20;
    // mp[2]=30;

    mp.insert(make_pair(3,40));
    mp.insert(make_pair(0,10));
    mp.insert(make_pair(1,30));
    mp.insert(make_pair(2,20));
    mp.insert(make_pair(2,40));


    //iterator
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

    return 0;
}