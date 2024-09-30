#include "Payment.h"

Payment::Payment(const QString& typ) : type(typ) {}

QString Payment::getType() const {
    return type;
}
