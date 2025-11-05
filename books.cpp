#include <iostream>
using namespace std;
class books
{
    private :
    char ISBNO[50], bookname[50], Author[50];
    int pages, ACCNO;
    float price;
    public :
    void getdetails()
    {
       cout<<"Enter ISBNO";
       cin>>ISBNO;
       cout<<"Enter bookname";
       cin>>bookname;
       cout<<"Enter Author";
       cin>>Author;
       cout<<"Enter pages";
       cin>>pages;
       cout<<"Enter ACCNO";
       cin>>ACCNO;
       cout<<"Enter price";
       cin>>price;
    }

void  display()
{
    cout<<"\n ISBNO       :"<<ISBNO;
    cout<<"\n bookname    :"<<bookname;
    cout<<"\n Author      :"<<Author;
    cout<<"\n pages       :"<<pages;
    cout<<"\n ACCNO       :"<<ACCNO;
    cout<<"\n price       :"<<price;
}
};
int main()
{
    books b[10];
    int i,n;
    cout<<"Enter the n value";
    cin>>n;
    for(i = 0; i<n; i++)
    b[i].getdetails();
    b[i].display();
}