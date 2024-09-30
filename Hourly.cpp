#include "Hourly.h"

Hourly::Hourly(double hr) : Payment("Hourly"), hourlyRate(hr), hours(0) {}

void Hourly::addHours(double hrs) {
    hours += hrs;
}

double Hourly::pay() const {
    return hourlyRate * hours;
}

Payment* Hourly::clone() const {
    return new Hourly(*this); // Create a new Hourly instance with the same attributes
}
