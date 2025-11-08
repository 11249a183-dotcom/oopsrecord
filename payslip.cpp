#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Payslip
{
private:
    int emp_no;
    float basic_pay, da, hra, epf, p_tax, gpay, total_ded, net_pay;
    string name, dept, design, bank_no, pan_no;

public:
    void getdetails()
    {
        cout << "Enter Employee Number: ";
        cin >> emp_no;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);

        cout << "Enter Designation: ";
        getline(cin, design);

        cout << "Enter Bank Account Number: ";
        getline(cin, bank_no);

        cout << "Enter PAN Number: ";
        getline(cin, pan_no);

        cout << "Enter Basic Pay: ";
        cin >> basic_pay;
    }

    void calculate()
    {
        da = 0.10 * basic_pay;     
        hra = 0.20 * basic_pay;    
        epf = 0.08 * basic_pay;    
        p_tax = 200;               
        gpay = basic_pay + da + hra;
        total_ded = epf + p_tax;
        net_pay = gpay - total_ded;
    }

    void display()
    {
        cout << "\n---------------------------------------------\n";
        cout << setw(25) << "EMPLOYEE PAYSLIP\n";
        cout << "---------------------------------------------\n";
        cout << "Employee No       : " << emp_no << endl;
        cout << "Employee Name     : " << name << endl;
        cout << "Department        : " << dept << endl;
        cout << "Designation       : " << design << endl;
        cout << "Bank Account No   : " << bank_no << endl;
        cout << "PAN No            : " << pan_no << endl;
        cout << "---------------------------------------------\n";
        cout << fixed << setprecision(2);
        cout << "Basic Pay         : Rs. " << basic_pay << endl;
        cout << "DA (10%)          : Rs. " << da << endl;
        cout << "HRA (20%)         : Rs. " << hra << endl;
        cout << "Gross Pay         : Rs. " << gpay << endl;
        cout << "---------------------------------------------\n";
        cout << "EPF (8%)          : Rs. " << epf << endl;
        cout << "Professional Tax  : Rs. " << p_tax << endl;
        cout << "Total Deduction   : Rs. " << total_ded << endl;
        cout << "---------------------------------------------\n";
        cout << "Net Pay           : Rs. " << net_pay << endl;
        cout << "---------------------------------------------\n";
    }
};

int main()
{
    Payslip emp1;
    emp1.getdetails();
    emp1.calculate();
    emp1.display();

    return 0;
}
