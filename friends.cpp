
#include <iostream>
using namespace std;


class ClassB;

class ClassA 
{
private:
    int marks;
public:  
    ClassA(int m) : marks(m) {}    
    friend void compareMarks(ClassA, ClassB);
};
class ClassB {
private:
    int marks;
public:   
    ClassB(int m) : marks(m) {}    
    friend void compareMarks(ClassA, ClassB);
};
void compareMarks(ClassA a, ClassB b) {
    cout << "Marks of Class A student: " << a.marks << endl;
    cout << "Marks of Class B student: " << b.marks << endl;

    if (a.marks > b.marks)
        cout << "Class A student has higher marks." << endl;
    else if (a.marks < b.marks)
        cout << "Class B student has higher marks." << endl;
    else
        cout << "Both students have equal marks." << endl;
}

int main() {
    ClassA studentA(85);
    ClassB studentB(90);    
    compareMarks(studentA, studentB);
    return 0;
}
