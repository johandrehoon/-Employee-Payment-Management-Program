#ifndef COMMISSION_H
#define COMMISSION_H

#include "Payment.h"

class Commission : public Payment {
private:
    double commissionRate;
    double totalSales;
public:
    Commission(double cr);
    void addSales(double sv);
    double pay() const override;
    Payment* clone() const override; // Implement clone
};

#endif // COMMISSION_H
