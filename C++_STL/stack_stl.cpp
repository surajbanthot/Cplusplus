#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<list>

//stack uses the dequeue datastructure for storing the elements 
//later where we can change the ds in initialisation 

using namespace std;

int main()
{
    // stack<int> stackcpp; uses dequeue and modifying it to list
    stack<int,list<int>> stackcpp;
    stackcpp.push(100);
    stackcpp.push(200);
    stackcpp.push(300);
    stackcpp.push(400);
    while(!stackcpp.empty())
    {
        cout<<stackcpp.top()<<endl;
        stackcpp.pop();
    }
    return 0;
}