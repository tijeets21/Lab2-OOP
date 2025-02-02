// main.cpp
// Group 07
// Developers: Tijeet Singh

#include <iostream>
#include "Truck.h"
#include "Location.h"
#include "Driver.h"

using namespace std;

int main() {
    // Creating driver instances
    Driver driver1("Tijeet", "Singh", 35);
    Driver driver2("Mike", "Smith", 69);

    // Creating location instances
    Location location1(2, 3);
    Location location2(5, 2);

    // Creating truck instances
    Truck truck1(178534, driver1, location1);
    Truck truck2(245817, driver2, location2);

    // Calculating distances
    double distanceBetweenTrucks = truck1.calculateDistance(truck2);
    double distanceTruck1ToOrigin = truck1.calculateDistanceFromOrigin();
    double distanceTruck2ToOrigin = truck2.calculateDistanceFromOrigin();

    // Outputting results
    cout << "The distance between the two trucks is: " << distanceBetweenTrucks << endl;
    cout << "The distance between the truck (with ID = " << truck1.getId() << ") and the origin is: " << distanceTruck1ToOrigin << endl;
    cout << "The distance between the truck (with ID = " << truck2.getId() << ") and the origin is: " << distanceTruck2ToOrigin << endl;

    return 0;
}

