#include<iostream>
// #include<vector>
// #include<list>
#include<forward_list>


using namespace std;

int main()
{
    // vector<int> v={2,4,6,8,10};
    // v.push_back(20);
    // v.push_back(30);

    // // using for each loop
    // // for(int x:v)
    // // cout<<x<<endl;

    // //use of iterator
    // vector<int>::iterator itr;

    // cout<<"using Iterator"<<endl;
    // for(itr=v.begin();itr!=v.end();itr++)
    // cout<<*itr<<endl;


    // list<int> i={2,3,4,5,6};
    // i.push_front(10);
    // i.push_back(20);
    // i.pop_back();
    // i.pop_front();

    // list<int>::iterator itr;

    // cout<<"Using Iterator"<<endl;

    // for(itr=i.begin();itr!=i.end();itr++)
    // cout<<*itr<<endl;

    // cout<<"using for each"<<endl;

    // for(int x:i)
    // cout<<x<<endl;

    forward_list<int> fw={2,3,4,5,6};

    fw.push_front(20);
    fw.pop_front();

    forward_list<int>::iterator itr;
    cout<<"Using Iterator\n";
    for(itr=fw.begin();itr!=fw.end();itr++)
    {
        cout<<*itr<<endl;
    }

    
    return 0;
}