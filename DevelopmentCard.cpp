/*
shay kronfeld
322234782
kronfeldshay@gmail.com
*/

#include "DevelopmentCard.hpp"

DevelopmentCard::DevelopmentCard(const std::string& name) : name(name) {}

DevelopmentCard::~DevelopmentCard() {}

std::string DevelopmentCard::getName() const {
    return name;
}

