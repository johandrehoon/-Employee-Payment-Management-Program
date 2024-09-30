#include "Salary.h"

Salary::Salary(double sal) : Payment("Salary"), salary(sal) {}

double Salary::pay() const {
    return salary;
}

Payment* Salary::clone() const {
    return new Salary(*this); // Create a new Salary instance with the same attributes
}
