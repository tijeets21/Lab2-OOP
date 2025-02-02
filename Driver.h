// Driver.h
#pragma once

#include <string>

// Class representing a driver with first name, last name, and driver ID
class Driver {
protected:
    std::string firstName, lastName;

public:
    int driverId;

    Driver(std::string firstName, std::string lastName, int driverId);
};
