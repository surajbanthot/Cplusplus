#include<iostream>
#include<forward_list>
#include<algorithm>
#include<numeric>
#include<vector>

using namespace std;

//Functional programming with Map(), filter() & reduce()

int main()
{

    //map transform
    vector<int> v ={1,2,3,4,5,6,7};

    vector<int> vout(v.size());

    transform(v.begin(),v.end(), vout.begin(),[](int & value){return value *3;});

    for(auto x:vout)
    {
            cout<<x<<endl;
    }
}