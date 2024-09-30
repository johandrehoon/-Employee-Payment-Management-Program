#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include "Payment.h"

class Employee {
private:
    static int nextID;
    int id;
    QString firstName;
    QString surname;
    Payment* payment;
public:
    Employee(const QString& fn, const QString& sn, Payment* pay);
    Employee(const Employee& e);
    ~Employee();
    int getID() const;
    QString getName() const;
    void setPayment(Payment* pay);
    Payment* getPayment() const;
};

#endif // EMPLOYEE_H
