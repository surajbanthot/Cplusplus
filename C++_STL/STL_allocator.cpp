#include<iostream>
#include<vector>

using namespace std;

template<typename type>
struct MyAlloc :allocator<type>{
    type  * allocate(size_t size)
    {
        cout<<" Allocation request size => "<<size<<endl;
        return new type[size];
    }
};


int main()
{
    vector<int, MyAlloc<int>> v1;
    v1.push_back(10);
    for(auto var: v1)
    cout<<var<<endl;


    return 0;
    
}