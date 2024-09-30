#ifndef PAYMENT_H
#define PAYMENT_H

#include <QString>

class Payment {
protected:
    QString type;
public:
    Payment(const QString& typ);
    virtual ~Payment() = default;
    QString getType() const;
    virtual double pay() const = 0; // Pure virtual function
    virtual Payment* clone() const = 0; // Pure virtual method for cloning
};

#endif // PAYMENT_H
