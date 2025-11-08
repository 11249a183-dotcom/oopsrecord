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
class BSC : public Student {
private:
    int phy, chem, math;
public:
    void getBSC() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Physics marks: ";
        cin >> phy;
        cout << "Enter Chemistry marks: ";
        cin >> chem;
    }
    void displayBSC() {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem << endl;
    }
};
class BA : public Student {
private:
    int hindi, punjabi;
public:
    void getBA() {
        getStudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "Enter Punjabi marks: ";
        cin >> punjabi;
    }
    void displayBA() {
        displayStudent();
        cout << "\nHindi marks: " << hindi;
        cout << "\nPunjabi marks: " << punjabi << endl;
    }
};
int main() {
    BSC b1;
    BA b2;
    int choice;
    cout << "1. BSC\n2. BA\nEnter your stream: ";
    cin >> choice;
    if(choice == 1) {
        b1.getBSC();
        cout << "\nBSC Student Details:\n";
        b1.displayBSC();
    } else if(choice == 2) {
        b2.getBA();
        cout << "\nBA Student Details:\n";
        b2.displayBA();
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
