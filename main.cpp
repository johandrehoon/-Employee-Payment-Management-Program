#include <iostream>
#include "Employee.h"
#include "Hourly.h"
#include "Salary.h"
#include "Commission.h"
#include "EmployeeList.h"

int main() {
    EmployeeList employeeList;

    // Create employees
    employeeList.append(Employee("John", "Doe", new Salary(3000)));
    employeeList.append(Employee("Jane", "Smith", new Hourly(20)));
    employeeList.append(Employee("Alice", "Brown", new Commission(0.1)));
    employeeList.append(Employee("Bob", "Johnson", new Hourly(15)));
    employeeList.append(Employee("Charlie", "Davis", new Salary(3500)));
    employeeList.append(Employee("Eve", "Wilson", new Commission(0.2)));

    // Add hours and sales
    dynamic_cast<Hourly*>(employeeList[1].getPayment())->addHours(160); // Jane Smith
    dynamic_cast<Commission*>(employeeList[2].getPayment())->addSales(5000); // Alice Brown

    // Make sure to add hours and sales if needed
    dynamic_cast<Hourly*>(employeeList[3].getPayment())->addHours(0); // Bob Johnson (or update as needed)
    dynamic_cast<Commission*>(employeeList[5].getPayment())->addSales(0); // Eve Wilson (or update as needed)

    // Display payments
    for (const Employee& emp : employeeList) {
        std::cout << "Employee ID: " << emp.getID() << "\n";
        std::cout << "Name: " << emp.getName().toStdString() << "\n";
        std::cout << "Payment Type: " << emp.getPayment()->getType().toStdString() << "\n";
        std::cout << "Amount: " << emp.getPayment()->pay() << "\n\n";
    }

    return 0;
}
