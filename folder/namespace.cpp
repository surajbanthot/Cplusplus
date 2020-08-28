#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "First" << endl;
    }
}; // namespace first

namespace second
{
    void fun()
    {
        cout << "Second" << endl;
    }
}; // namespace second



// Using namespace first

// int main(){
// fun();}


int main()
{
    first::fun();

    second::fun();

    return 0;
}