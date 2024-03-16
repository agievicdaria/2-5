#pragma once
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int cylinders;
    double power;

public:
    Car();
    Car(const string& brand, int cylinders, double power);
    Car(const Car& secondCar);
    ~Car() {}

    const string& GetBrand() const { return brand; }
    int GetCylinders() const { return cylinders; }
    double GetPower() const { return power; }
    void SetBrand(const string& brand) { this->brand = brand; }
    void SetCylinders(int cylinders) { this->cylinders = cylinders; }
    void SetPower(double power) { this->power = power; }

    string toString() const;

    Car& operator++();
    Car operator++(int);
    Car& operator--();
    Car operator--(int);
    Car& operator=(const Car& secondCar);

    friend ostream& operator<<(ostream& out, const Car& car);
    friend istream& operator>>(istream& in, Car& car);
    
};
