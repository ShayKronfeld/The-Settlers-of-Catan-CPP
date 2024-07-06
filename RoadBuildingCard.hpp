/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#ifndef ROADBUILDINGCARD_HPP
#define ROADBUILDINGCARD_HPP

#include "DevelopmentCard.hpp"

class RoadBuildingCard : public DevelopmentCard {
public:
    RoadBuildingCard(); // Constructor
    virtual ~RoadBuildingCard() override; //Destructor
    RoadBuildingCard& operator=(const RoadBuildingCard& other); // Assignment operator


    void use(Player* player, const std::vector<Player*>& allPlayers) const override; // Override the use method from DevelopmentCard
};

#endif // ROADBUILDINGCARD_HPP
