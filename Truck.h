// Truck.h
#pragma once

#include "Location.h"
#include "Driver.h"

// Class representing a truck, inheriting from Location and Driver
class Truck : public Location, public Driver {

protected:
    int truckId;

public:
    Truck(int truckId, Driver driver, Location location);

    // Function to calculate distance from the origin
    double calculateDistanceFromOrigin() const;

    // Function to calculate distance from another truck
    double calculateDistance(const Truck& otherTruck) const;

    // Getter for truck ID
    int getId() const;
};
