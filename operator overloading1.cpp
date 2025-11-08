#include <iostream>
using namespace std;

class Complex 
{
private:
    float real;
    float imag;
public:   
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex operator - (const Complex& obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }    

    friend ostream& operator << (ostream& out, const Complex& c);
};

ostream& operator << (ostream& out, const Complex& c)
{
    if (c.imag >= 0)
        out << c.real << " + " << c.imag << "i";
    else
        out << c.real << " - " << -c.imag << "i"; 
    return out;
}

int main() 
{
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);

    Complex sum = c1 + c2;  
    Complex diff = c1 - c2;  

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;

    return 0;
}
