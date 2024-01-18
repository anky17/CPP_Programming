/*Write a C++ function called updateEmployeeSalary that takes a reference parameter salary and increases it by a given percentage. In the main function,
prompt the user to enter an employee's current salary and the percentage increase. Call the updateEmployeeSalary function, passing the entered salary
and percentage increase. The function should modify the salary by increasing it based on the given percentage. Finally, print the original salary and the
updated salary to verify the changes.*/

#include<iostream>
using namespace std;
double updateEmployeeSalary(double &salary, double perincrease=0.00 )
{
    salary += salary * (perincrease/100);
    return salary;
}

int main()
{
    double salary , percentincrease;
    cout<<"Enter the original salary of employee:";
    cin>>salary;
    cout<<"Enter the percentage increase in salary:";
    cin>>percentincrease;
    cout<<"The original salary of the employee is "<<updateEmployeeSalary(salary)<<endl;
    cout<<"The updated salary of the employee is "<<updateEmployeeSalary(salary, percentincrease)<<endl;
    return 0;
}