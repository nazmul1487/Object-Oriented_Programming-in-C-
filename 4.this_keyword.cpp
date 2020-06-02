#include<iostream>
using namespace std;

class student
{
public:
    string name;// here name is a class variable.
    student(string name) // here name is a local variable.
    {
        this->name = name;
    }
    void display()
    {
        cout<< name <<endl;
    }
};

int main()
{
    student obj("nazmul");
    obj.display();
    return 0;
}
