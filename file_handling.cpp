#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt", ios::trunc); //creates the file and truncates the file

    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
    
}