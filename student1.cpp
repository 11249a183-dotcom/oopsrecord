#include<iostream>
using namespace std;
class student
{
    private :
    int rollno, mark1, mark2, mark3, total;
    char name[50];
    float avg;
    public :
    void getdetails();
    void calculate();
    void print();
};
    void student :: getdetails()
    {
        cout<<"Enter rollno";
        cin>>rollno;
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter 3 marks";
        cin>>mark1;
        cin>>mark2;
        cin>>mark3;
    }
    void student :: calculate()
    {
        total = mark1+mark2+mark3;
        avg = total/3;
    }
    void student :: print()
    {
    cout<<"\n name               :"<<name;           
    cout<<"\n rollno             :"<<rollno;
    cout<<"\n mark1              :"<<mark1;
    cout<<"\n mark2              :"<<mark2;
    cout<<"\n mark3              :"<<mark3;
    cout<<"\n total              :"<<total;
    cout<<"\n avg                :"<<avg;
}
int main()
{
    student s;
    s.getdetails();
    s.calculate();
    s.print();
    return 0;
}   
    
