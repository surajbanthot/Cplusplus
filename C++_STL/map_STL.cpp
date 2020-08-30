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
    // for(auto itr=mp.begin();itr!=mp.end();itr++)
    // cout<<itr->first<<" "<<itr->second<<endl;
    //greater will sort the list in a descending order
    //lesser will sort the list in a ascending order


    map<int,string,greater<int>> mymap;
    mymap[0]="abc";
    mymap[1]="efg";
    mymap[2]="hij";
    mymap[3]="klm";

    for(auto &elem: mymap)
    {
        cout<<elem.first<<" - "<<elem.second<<endl;
    }

    return 0;
}