/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#include "DevelopmentCard.hpp"

// Constructor with parameter to initialize the name of the card
DevelopmentCard::DevelopmentCard(const std::string& name) : name(name) {}

// destructor for polymorphic behavior
DevelopmentCard::~DevelopmentCard() {}

// Inside the DevelopmentCard class implementation
DevelopmentCard& DevelopmentCard::operator=(const DevelopmentCard& other) {
    if (this != &other) { // Self-assignment check
        this->name = other.name; // No need for deep copy as there are no dynamic resources in this class
    }
    return *this;
}

// Getter for the name of the card
std::string DevelopmentCard::getName() const {
    return name;
}

