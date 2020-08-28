#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    // friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};

// ofstream &operator<<(ofstream &ofs, Student &s1)
// {
//     ofs << s1.name << endl;
//     ofs << s1.roll << endl;
//     ofs << s1.branch << endl;
//     return ofs;
// }

ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

int main()
{
    // ofstream ofs("My.txt", ios::trunc); //creates the file and truncates the file

    // ofs<<"John"<<endl;
    // ofs<<25<<endl;
    // ofs<<"cs"<<endl;

    // ofs.close();

    // ifstream infile;
    // infile.open("My.txt");
    // if(!infile)
    // {
    //     cout<<"file cannot be opened"<<endl;
    // }
    // string str;
    // int x;
    // infile>>str;
    // infile>>x;
    // cout<<str<<" "<<x;
    // if(infile.eof())
    // {
    //         cout<<"end of the file reached\n";
    //         infile.close();
    // }

    Student s1;
    s1.name = "John";
    s1.roll = 10;
    s1.branch = "CS";

    // ofstream ofs("Student.txt", ios::trunc);
    // ofs<<s1;
    // ofs.close();


    ifstream ifs("Student.txt");
    ifs>>s1;

    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;
    ifs.close();

}

