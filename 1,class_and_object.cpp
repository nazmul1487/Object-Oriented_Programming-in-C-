#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout<<"id=" <<id << " "<<"gpa=" <<gpa <<endl;
    }
};


int main()
{
    student Nazmul;
    Nazmul.setValue(1487, 3.82);
    Nazmul.display();
    return 0;
}
