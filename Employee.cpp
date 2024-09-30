#include "Employee.h"

int Employee::nextID = 1001;

Employee::Employee(const QString& fn, const QString& sn, Payment* pay)
    : id(nextID++), firstName(fn), surname(sn), payment(pay ? pay->clone() : nullptr) {}

Employee::Employee(const Employee& e)
    : id(e.id), firstName(e.firstName), surname(e.surname), payment(e.payment ? e.payment->clone() : nullptr) {}

Employee::~Employee() {
    delete payment;
}

int Employee::getID() const {
    return id;
}

QString Employee::getName() const {
    return firstName + " " + surname;
}

void Employee::setPayment(Payment* pay) {
    delete payment;
    payment = pay ? pay->clone() : nullptr;
}

Payment* Employee::getPayment() const {
    return payment;
}
