#include <iostream>
#include <string>
using namespace std;

int main()
{
    int employeeNumber[3];
    string name[3];
    double salary[3];
    double tax[3];
    double netPay[3];
    double totalSalary = 0;
double totalTax = 0;
string gender[3];
string department[3];


    for (int i = 0; i < 3; i++)
{
    cout<< "Enter employee number: ";
    cin >> employeeNumber[i];

    cout << "Enter employee name: ";
    getline(cin >> ws, name[i]);

    cout << "Enter salary: ";
    if (!(cin >> salary[i]) || salary[i] < 0) {
    cerr << "Invalid salary\n";
    return 1;
}
    
    cout << "Enter gender: ";
    cin >> gender[i];
    cout << "Enter department: ";
    cin >> department[i];

    tax[i] = salary[i] * 0.05;
netPay[i] = salary[i] - tax[i];


}
for (int pass = 0; pass < 2; pass++)
{
    for (int j = 0; j < 2; j++)
    {
        if (netPay[j] < netPay[j + 1])
        {
           double tempNetPay = netPay[j];
netPay[j] = netPay[j + 1];
netPay[j + 1] = tempNetPay;

    // The other four employee fields must also be swapped here.

int tempEmployeeNumber = employeeNumber[j];
employeeNumber[j] = employeeNumber[j+1];
employeeNumber[j+1] = tempEmployeeNumber;

string tempName = name[j];
name[j] = name[j+1];
name[j+1] = tempName;

double tempSalary = salary[j]; 
salary[j] = salary[j+1]; 
salary[j+1] = tempSalary;

double tempTax = tax[j];
tax[j] = tax[j+1]; 
tax[j+1] = tempTax; // Put your existing five swaps here.

string tempGender = gender[j];
gender[j] = gender[j+1];
gender[j+1] = tempGender;

string tempDepartment = department[j];
department[j] = department[j+1];
department[j+1] = tempDepartment;



        }
    }


}



    
cout << "Number Name Salary Tax NetPay Gender Department" << endl;

for(int i= 0;i<3;i++ )
{
    cout<<employeeNumber[i]<<" "<<name[i]<<" "<<salary[i]<<" "<<tax[i]<<" "<<netPay[i]<<" "<<gender[i]<<" "<<department[i]<<endl;

totalSalary = totalSalary + salary[i];
totalTax = totalTax + tax[i];


}

    

cout << "Total salary: " << totalSalary << endl;
cout << "Total tax: " << totalTax << endl;


    return 0;
}