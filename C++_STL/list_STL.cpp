#include<iostream>
// list  STL is a doubly linkeed list
#include<list>

using namespace std;

int main()
{

    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(20);


    list <int>::iterator itr = l.begin();

    for(auto c:l)
    cout<<c<<endl;

    return 0;
}