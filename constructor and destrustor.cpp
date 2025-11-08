#include <iostream>
using namespace std;
class student {
private:
    int rollno;
    string name;
public:  
    student() {
        cout << "Enter student name: ";
        cin >> name;  
        cout << "Enter rollno: ";
        cin >> rollno;
    }
    student(int r, string n) {
        rollno = r;
        name = n;
    }
    student(const student &s) {
        rollno = s.rollno;
        name = s.name;
    }  
    ~student() {
        cout << "\nDestructor is called!";
    }
    void display() {
        cout << "\nRoll No: " << rollno;
        cout << "\nName: " << name << endl;
    }
};
int main() {
    student s1;                
    student s2(101, "Yashu");  
    student s3 = s2;           
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
