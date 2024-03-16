#pragma once

#include "Car.h"

class Lorry {
private:
    Car car;
    double payload;

public:
    Lorry();
    Lorry(const Car& car, double payload);
    Lorry(const Lorry& secondLorry);
    ~Lorry() {}

    void SetCar(const Car& car) { this->car = car; }
    void SetPayload(double payload) { this->payload = payload; }
    Car GetCar() const { return car; }
    double GetPayload() const { return payload; }

    string toString() const;

    Lorry& operator++();
    Lorry operator++(int);
    Lorry& operator--();
    Lorry operator--(int);
    Lorry& operator=(const Lorry& secondLorry);
    friend ostream& operator<<(ostream& out, const Lorry& lorry);
    friend istream& operator>>(istream& in, Lorry& lorry);
};
