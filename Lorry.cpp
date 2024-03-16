// Lorry.cpp
#include "Lorry.h"
#include <iostream>
#include <sstream>

// Constructors
Lorry::Lorry() {
    car = Car();
    payload = 0.0;
}

Lorry::Lorry(const Car& car, double payload) {
    this->car = car;
    this->payload = payload;
}

Lorry::Lorry(const Lorry& secondLorry) {
    car = secondLorry.car;
    payload = secondLorry.payload;
}

string Lorry::toString() const {
    stringstream sout;
    sout << "Car: " << car.toString() << "Payload: " << to_string(payload) << endl;
    return sout.str();
}

Lorry& Lorry::operator=(const Lorry& secondLorry) {
    if (this != &secondLorry) {
        car = secondLorry.car;
        payload = secondLorry.payload;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Lorry& lorry) {
    out << "Car: " << lorry.car << "Payload: " << lorry.payload << endl;
    return out;
}

istream& operator>>(istream& in, Lorry& lorry) {
    cout << "Enter car details:\n";
    in >> lorry.car;
    cout << "Enter payload: ";
    in >> lorry.payload;
    return in;
}

Lorry& Lorry::operator++() {
    car++;
    return *this;
}

Lorry Lorry::operator++(int) {
    Lorry l = *this;
    payload++;
    return l;
}

Lorry& Lorry::operator--() {
    car--;
    return *this;
}

Lorry Lorry::operator--(int) {
    Lorry l = *this;
    payload--;
    return l;
}
