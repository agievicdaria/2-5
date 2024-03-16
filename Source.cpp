#include "Car.h"
#include "Lorry.h"
#include <iostream>
using namespace std;

int main() {
    Car c;
    cout << "Enter car details:\n";
    cin >> c;
    cout << c;

    Lorry l;
    cout << "Enter lorry details:\n";
    cin >> l;
    cout << l;

    Car myCar("bmw", 4, 200.0);
    cout << "Initial cylinders: " << myCar.GetCylinders() << endl;
    cout << "Initial power: " << myCar.GetPower() << endl;

    ++myCar;
    cout << "Cylinders after prefix increment: " << myCar.GetCylinders() << endl;

    myCar++;
    cout << "Power after postfix increment: " << myCar.GetPower() << endl;

    --myCar;
    cout << "Cylinders after prefix decrement: " << myCar.GetCylinders() << endl;

    myCar--;
    cout << "Power after postfix decrement: " << myCar.GetPower() << endl;

    cout << "Size of Car without #pragma pack(1): " << sizeof(Car) << endl;

    #pragma pack(1)
    cout << "Size of Car with #pragma pack(1): " << sizeof(Car) << endl;
    #pragma pack()

    cout << "Size of Lorry without #pragma pack(1): " << sizeof(Lorry) << endl;

    #pragma pack(1)
    cout << "Size of Lorry with #pragma pack(1): " << sizeof(Lorry) << endl;
    #pragma pack()

    return 0;
}
