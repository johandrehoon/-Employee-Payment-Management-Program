#include "Commission.h"

Commission::Commission(double cr) : Payment("Commission"), commissionRate(cr), totalSales(0) {}

void Commission::addSales(double sv) {
    totalSales += sv;
}

double Commission::pay() const {
    return commissionRate * totalSales;
}

Payment* Commission::clone() const {
    return new Commission(*this); // Create a new Commission instance with the same attributes
}
