/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#include "Path.hpp" 
#include "Player.hpp" 

#include "Building.hpp" 
#include <iostream> 
#include <algorithm> 

// Constructor: Initializes a Path object with given source and target vertices
Path::Path(int source, int target) : source(source), target(target), road(nullptr) {}

// Destructor: Cleans up resources owned by the Path object
Path::~Path() {}

// Getter for the source vertex index of the path
int Path::getSource() const {
    return source;
}

// Getter for the target vertex index of the path
int Path::getTarget() const {
    return target;
}

// Checks if there is a road (Building object) on this path
bool Path::hasRoad() const {
    return road != nullptr;
}

// Getter for the Building object representing the road on this path
Building* Path::getBuilding() const {
    return road;
}

void Path::setBuilding(Building* newBuilding) {
    if (road != nullptr) {
        // Remove the road from the player's list of buildings
        Player* owner = road->getOwner();
        if (owner != nullptr) {
            auto& playerBuildings = owner->getBuildings();
            auto it = std::find(playerBuildings.begin(), playerBuildings.end(), road);
            if (it != playerBuildings.end()) {
                playerBuildings.erase(it);
                owner->printBuildings(); // Print updated buildings
            }
        }
        delete road; // Delete the old road
    }
    road = newBuilding;
}

