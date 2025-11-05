#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    public:
    student()
    {
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>rollno;
    }
    student(int r, string n)
    {
        rollno=r;
        name=n;
    }
    student(student&s)
    {
        rollno=s.rollno;
        name=s.name;
    }
    ~student()
    {
         cout<<"\n Destructure is called!";
    }
    void display()
    {
        cout<<"\n Rollno:"<<rollno;
        cout<<"\n Name:"<<name;
    }
};
int main()
{
    student s1;
    student s2(101,"yashu");
    student s3=s2;
    s1.display(1);
    s2.display(2);
    s3.display(3);
}
