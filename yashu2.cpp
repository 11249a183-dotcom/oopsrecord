#include<iostream>
using namespace std;
class Complex
{
    private:
    float real,imag;
    public:
    Complex(float r=0, float i=0)
    {
        real=r;
        imag=i;
    }
    Complex temp
    {
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
    }
    void display()
    {
        cout<< real"r"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(3,2),c2(1,7);
    Complex c3;
    c3=c1 add c2;
    cout<<"First Complex number:";
    c1.display();
    cout<<"Second Complex number:";
    c2.display();
    cout<<"sum of two complex number:";
    c3.display();
    return 0;
}