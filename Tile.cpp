/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#include "Tile.hpp"

// Constructor initializes a tile with a specified resource and number.
Tile::Tile(Resource resource, int number) : resource(resource), number(number) {}

// Destructor for Tile class.
Tile::~Tile() {}


Tile& Tile::operator=(const Tile& other) {
    if (this != &other) { // Self-assignment check
        // Copy data members
        this->resource = other.resource;
        this->number = other.number;
    }
    return *this;
}

// Getter function for retrieving the resource of the tile.
Resource Tile::getResource() const {
    return resource;
}

// Getter function returning the string representation of the resource type.
std::string Tile::getResourceType() const {
    switch (resource) {
        case WOOD: return "WOOD";
        case BRICK: return "BRICK";
        case SHEEP: return "SHEEP";
        case WHEAT: return "WHEAT";
        case IRON: return "IRON";
        case DESERT: return "DESERT";
        default: return "UNKNOWN";
    }
}

// Getter function for retrieving the number of the tile.
int Tile::getNumber() const {
    return number;
}

// Static method to convert a Resource enum value to its corresponding string representation.
std::string Tile::resourceToString(Resource resource) {
    switch (resource) {
        case WOOD: return "WOOD";
        case BRICK: return "BRICK";
        case SHEEP: return "SHEEP";
        case WHEAT: return "WHEAT";
        case IRON: return "IRON";
        case DESERT: return "DESERT";
        default: return "UNKNOWN";
    }
}
