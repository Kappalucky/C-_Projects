//program prog3f.cpp
//payroll program - reads in an ID number, hours worked
//and rate of pay, and computes the weekly pay, after taxes,
//using interactive data entry and cerr for prompts

#include <iostream>
using namespace std;
int main()
{
    int id, numemps = 0;
    double hours, rate, pay, tax, netpay;
    
    cout.setf(ios::fixed,ios::floatfield); //sets decimal point to two places after ex: 12.22 rather than 12.256
    cout.precision(2);
    
cout << "\t\t\tPayroll Report" <<'\n' << '\n';
cerr << "This program compute's an employee's pay" << '\n';
cerr << "Enter ID number, hours worked, and rate of pay" << '\n';
cerr << "First, enter the employee's ID number" << '\n';
cerr << "To stop, enter a negative value as the employee's ID number>";
cin >> id;

    while (id >=0)  //loop until user enters negative value
    {
        cerr << "Enter hours worked> ";
        cin >> hours;
        cerr << "Enter the pay rate> ";
        cin >> rate;
        pay = hours * rate;
        
        tax = pay < 300 ? 0.15 * pay : 0.28 * pay;
        netpay = pay - tax;
    
        cout << "Employee " << id << " worked " << hours << " hours at a rate of $" 
        << rate << " earning $" << pay << '\n';
        cout << "Tax withheld was $" << tax << " leaving net pay of $"
        << netpay << '\n' << '\n';
        cerr << "New Employee: ";
        cin >> id;
        numemps++;
        
    }
    
cout << "We processed " << numemps << " employees" << '\n';
return 0;
}