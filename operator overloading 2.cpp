#include<iostream>
using namespace std;

class Unaryop
{
    int x, y, z;
public:
    // Default constructor
    Unaryop()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    // Parameterized constructor
    Unaryop(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

int main()
{
    Unaryop obj1; 
    cout << "Default constructor values: ";
    obj1.display();

    Unaryop obj2(5, 10, 15); 
    cout << "Parameterized constructor values: ";
    obj2.display();

    return 0;
}
