#include <iostream>
using namespace std;
class Complex 
{
    float real, imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
 {
    Complex c1(3, 3), c2(1, 4);
    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of two complex numbers: ";
    c3.display();

    return 0;
}
