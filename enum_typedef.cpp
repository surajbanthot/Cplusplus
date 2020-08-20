#include <iostream>

using namespace std;

// enum

// we can initialize the from the numbering has to start. 
// we can assign values to constants within the enum where the preceding constants will follow the iteration.

// enum day{mon=1, tue, wed, thu, fri, sat, sun};

// int main()
// {
//     day d;
//     d=tue;

//     cout<<d<<endl;

//     return 0;
// }

// typedef for better readability. 

typedef int marks;


int main()
{
    marks m1, m2, m3;

    m1=50;
    m2=30;

    cout<<m1<<"\n"<<m2;

    return 0;
}