#include <iostream>
using namespace std;
class Student {
private:
    char name[20];
    int rno;
public:
    void getStudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }
    void displayStudent() {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};
class Address : public Student {
private:
    char city[20];
public:
    void getAddress() {
        getStudent();  
        cout << "Enter city: ";
        cin >> city;
    }
    void displayAddress() {
        displayStudent();  
        cout << "\nCity: " << city << endl;
    }
};
int main() {
    Address a1;
    a1.getAddress();
    cout << "\nStudent Information:\n";
    a1.displayAddress();
    return 0;
}
