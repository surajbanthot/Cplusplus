#include <iostream>
// vector is contiguous memory allocator
#include <vector>
#include <algorithm>
#include <filesystem>

using namespace std;

  bool f(int x, int y)
    {
        return x > y;
    }

void vectorDemo()
{
    //C++ STL
    // vector<int> A = {11, 2, 3, 4};
    // // cout<<A[1]<<endl;

    // sort(A.begin(), A.end()); //O(NlogN)

    // for (auto x : A)
    //     cout << x << endl;

    // cout << "**********\n";

    // // bool present =binary_search(A.begin(),A.end(),3);

    // // if(present)cout<<"present";

    // A.push_back(100);

    // for (auto x : A)
    //     cout << x << endl;

    // A.push_back(100);
    // A.push_back(123);

    // //2,3,4,11,100,100,123

    // vector<int>::iterator itrlower = lower_bound(A.begin(), A.end(), 100); // Gives the first element >= to the specified
    // vector<int>::iterator itrupper = upper_bound(A.begin(), A.end(), 100); // Gives the first element > to the specified
    // cout << "lower_bound" << *itrlower << endl;
    // cout << "upper_bound" << *itrupper << endl;

    // cout << itrupper - itrlower << endl;

    //to print the elements in descending order

   
    // sort(A.begin(), A.end(), f);

   
    // //normal iteration
    // // for (auto c : A)
    // //     cout << c << endl;
    // //increasing the value of the elements of the array by one using reference

    // for(auto &c: A)
    // cout<<++c<<endl; 
}

int main()
{

    // sequence containers
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(45);
    v.push_back(50);
    v.push_back(40);

    // cout<<"Size of Vector v "<<v.size()<<endl;

    // v.clear();

    // cout<<"size after clearing the vector "<<v.size();

    //erase
    //parameters of erase will erase the items after the begin + <till_elements> , or from last the end - elements

    // v.erase(v.begin()+1, v.end()-1);

    //std::remove(v....,40);

    // in remove we need to specify the starting point, end and the element which needs to be removed from the array



    // std::remove(v.begin(),v.end(), 40);

    v.erase(std::remove(v.begin(),v.end(),40),v.end());



    vector<int>::iterator itr;
    // itr=v.begin();
  
    // cout<<*(itr+1);

    for(auto x:v)
    cout<<x<<endl;

    return 0;
}