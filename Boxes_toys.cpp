// Tina and Rahul have 1toy each. They are entering into an amusement park but it is not allowed to take the toys inside, so they have to keep it in the boxes provided by the park management. They want to keep the toys together in one box. There are  Nboxes in total, at this moment there are  t i toys present in  i t h box and the maximum capacity of the box is denoted by  c i. Rahul and Tina want to know in how many boxes can they keep their toys such that both the toys are in the same box. input are first testcases n and later
// ti and ci where ti is the number of toys and ci is the capacity of that box. 
#include <iostream>

using namespace std;

int main()
{
    int num_box, row = 0, count = 0;
    int t[100], c[100];
    int toys = 2;
    cin >> num_box;
    for (int i = 0; i < num_box; i++)
    {
        cin >> t[i];
        cin >> c[i];
    }
    for (int i = 0; i < num_box; i++)
    {
        if (c[i] >= 2 && c[i] - t[i] >= toys)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}