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
class Address {
private:
    char city[20];
public:
    void getAddress() {
        cout << "\nEnter city: ";
        cin >> city;
    }
    void displayAddress() {
        cout << "\nCity: " << city;
    }
};
class Account : public Student, public Address {
private:
    int tfee, submit, balance;
public:
    void getAccount() {
        getStudent();      
        getAddress();     
        cout << "\nEnter total fee: ";
        cin >> tfee;
        cout << "Enter submit fee: ";
        cin >> submit;
    }
    void displayAccount() {
        displayStudent();   
        displayAddress();   
        cout << "\nTotal fee: " << tfee;
        cout << "\nSubmit fee: " << submit;
        balance = tfee - submit;
        cout << "\nBalance fee: " << balance << endl;
    }
};
int main() {
    Account a1;
    a1.getAccount();
    cout << "\nStudent Account Details:\n";
    a1.displayAccount();
    return 0;
}
