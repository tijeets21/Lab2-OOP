// Truck.cpp
#include "Truck.h"
#include <cmath>

// Constructor for Truck class
Truck::Truck(int truckId, Driver driver, Location location)
        : Location(location), Driver(driver), truckId(truckId) {}

// Function to calculate distance from the origin
double Truck::calculateDistanceFromOrigin() const {
    return std::sqrt(x * x + y * y);
}

// Function to calculate distance from another truck
double Truck::calculateDistance(const Truck& otherTruck) const {
    return std::sqrt(
            std::pow(x - otherTruck.x, 2) + std::pow(y - otherTruck.y, 2)
    );
}

// Getter for truck ID
int Truck::getId() const {
    return truckId;
}
