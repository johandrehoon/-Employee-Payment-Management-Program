# Employee Payment Management Program

This program is designed to manage a list of employees with various payment structures. It provides a simple interface for creating employees, managing their payment types, updating their work hours or sales, and calculating their total payments. 

## Features

- **Employee Creation:** Easily create employees with different payment types, including salaried, hourly, and commission-based payments.
- **Dynamic Payment Management:** Supports different payment structures:
  - **Salary:** Fixed monthly payment.
  - **Hourly:** Payment based on hours worked.
  - **Commission:** Payment based on a percentage of sales.
- **Update Employee Details:** Add hours for hourly employees or sales for commission-based employees to update their payment information.
- **Payment Calculation:** Automatically calculates and displays the total payment for each employee based on their payment type.
- **Employee List Management:** Uses an `EmployeeList` class to manage a list of employees, allowing for iteration and easy access.

## Usage

In the `main.cpp` file, an `EmployeeList` object is created to store multiple employees with various payment structures. The following steps outline the main process of the program:

1. **Create Employees:** Several employees are created with different payment structures (`Salary`, `Hourly`, `Commission`) and added to the employee list.
2. **Update Payment Information:** Hours and sales can be added to the respective employees to reflect their payment information.
3. **Display Payments:** The program iterates through the employee list, calculates each employee's payment, and displays their details, including:
   - Employee ID
   - Name
   - Payment type (Salary, Hourly, Commission)
   - Total amount to be paid

## Example
Here is a brief example of what the output might look like:
![Screenshot 2024-08-31 093309](https://github.com/user-attachments/assets/efa97b76-d31f-44c1-b52e-f478b48fe389)



