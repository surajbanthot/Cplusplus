#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
        Rectangle r1;
        Rectangle *ptr;
        ptr=&r1;
        ptr->length=10;
        ptr->breadth=5;
        cout<<ptr->area()<<endl;
        cout<<ptr->perimeter()<<endl;
        


    // Rectangle r1, r2;
    // r1.length =10;
    // r1.breadth =10;
    // r2.length=20;
    // r2.breadth=20;
    // cout << "Area of the REectangle is " << r1.area() << endl;
    // cout << "Perimeter of the Rectangle is " << r2.perimeter() << endl;
    return 0;
}