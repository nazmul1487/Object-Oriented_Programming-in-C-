#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    student (int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout<<"id=" <<id << " "<<"gpa=" <<gpa <<endl;
    }
    student () //Default Constructor
    {
        cout<< "Default Constructor"<<endl;
    }
};


int main()
{
    student ob; //call default constructor.
    student Nazmul(1487, 3.82);
    Nazmul.display();
    return 0;
}

