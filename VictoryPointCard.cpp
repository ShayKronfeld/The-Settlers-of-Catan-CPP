/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#include "VictoryPointCard.hpp"
#include <iostream>

VictoryPointCard::VictoryPointCard() : DevelopmentCard("VictoryPoint") {}

VictoryPointCard::~VictoryPointCard() {}

VictoryPointCard& VictoryPointCard::operator=(const VictoryPointCard& other) {
    if (this != &other) { // Self-assignment check
        // No data members to copy
    }
    return *this;
}

void VictoryPointCard::use(Player* player, const std::vector<Player*>& allPlayers) const {
    // Display a message indicating the card's effect
    std::cout << "Played VictoryPointCard. Player " << player->getName() << " gets 1 victory point!" << std::endl;
    
    // Increase the player's victory points by 1
    player->addToVictoryPoints(1);
}
