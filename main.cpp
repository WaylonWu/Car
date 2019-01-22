//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Lab #9
//  Due Date: 12/2/16
//  Brief Project Description: Car
//----------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Car {
    
private:
    int yearModel;
    string make;
    int speed;
public:
    void constructor(int, string, int);
    void accelerate();
    void brake();
    void display();
};

void Car::constructor(int y, string m, int s) {
    
    speed = 0;
    yearModel = y;
    make = m;
}

void Car::accelerate() {
    
    speed += 10;
}

void Car::brake() {
    
    if (speed > 5)
        speed -= 5;
    else speed = 0;
}

void Car::display() {
    
    cout << "I am driving " << yearModel << " " << make << " at " << speed << " km/h.\n";
}

int main() {
    
    Car speed;
    int carYear;
    string carMake;
    int carSpeed = 0;
    
    cout << "What is the car make?\n";
    cin >> carMake;
    cout << "What is the car model year?\n";
    cin >> carYear;
    
    speed.constructor(carYear, carMake, carSpeed);
    
    for(int i = 0; i < 5; i++) {
        speed.display();
        speed.accelerate();
    }
    for(int i = 0; i < 6; i++) {
        speed.display();
        speed.brake();
    }
    
    return 0;
}
