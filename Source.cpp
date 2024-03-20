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
    cout << "Initial values: " << myCar << endl;
    ++myCar;
    cout << "After prefix increment: " << myCar << endl;
    myCar++;
    cout << "After postfix increment: " << myCar << endl;
    --myCar;
    cout << "After prefix decrement: " << myCar << endl;
    myCar--;
    cout << "After postfix decrement: " << myCar << endl;
    cout << "Car: " << myCar <<endl;

    Lorry myLorry(myCar, 500.0);
    cout << "Before increment:\n" << myLorry << endl;
    ++myLorry;
    cout << "After prefix increment:\n" << myLorry << endl;
    myLorry++;
    cout << "After postfix increment:\n" << myLorry << endl;
    --myLorry;
    cout << "After prefix decrement:\n" << myLorry << endl;
    myLorry--;
    cout << "After postfix decrement:\n" << myLorry << endl;


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
