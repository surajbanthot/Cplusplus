#include<iostream>
#include<queue>
using namespace std;
//other queue methods is priority queue where the elements are stored in front with hight priority
// priority_queue
int main()
{
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);

    while(!que.empty())
    {
        cout<<que.front()<<endl;
        cout<<que.back()<<endl;
        que.pop();
    }

    return 0;
}