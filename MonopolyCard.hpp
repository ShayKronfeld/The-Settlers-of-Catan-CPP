/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#pragma once

#include "DevelopmentCard.hpp"

class MonopolyCard : public DevelopmentCard {
public:
    MonopolyCard(); // Constructor
    virtual ~MonopolyCard() override; // Destructor
    MonopolyCard& operator=(const MonopolyCard& other); // Assignment operator


    void use(Player* player, const std::vector<Player*>& allPlayers) const override; // Override the use method from DevelopmentCard
};
