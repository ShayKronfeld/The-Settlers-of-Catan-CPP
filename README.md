# The-Settlers-of-Catan-CPP
Game: The Settlers of Catan CPP

# Overview
- This project implements a simplified version of the popular board game Catan in C++. It includes classes and functionalities to simulate the game mechanics such as building settlements, roads, cities, distributing resources, handling player actions, and implementing development cards.

- The game board layout, including resource tiles and their corresponding numbers, is permanently fixed for all games. This ensures consistency across different playthroughs. The game is designed for 3 players, with the player order determined randomly at the start of each game.

The schedule is permanently set for all games as follows:






![Uploading לוח קטאן עם מספרים.png…]()

# Files and Structure
- main.cpp: Entry point of the program. Initializes the game and starts gameplay.
- Player.hpp, Player.cpp: Defines the Player class, handling player actions and resources.
- Board.hpp, Board.cpp: Implements the game board, including vertices, edges (roads), and resource distribution.
- Building.hpp, Building.cpp: Abstract base class for Settlement and City, handling construction and upgrades.
- Settlement.hpp, Settlement.cpp: Class representing settlements on the board.
- City.hpp, City.cpp: Class representing cities, upgraded from settlements.
- Road.hpp, Road.cpp: Class representing roads connecting vertices on the board.
- DevelopmentCard.hpp, DevelopmentCard.cpp: Abstract base class for development cards.
- KnightCard.hpp, KnightCard.cpp: Implementation of the Knight development card.
- MonopolyCard.hpp, MonopolyCard.cpp: Implementation of the Monopoly development card.
- RoadBuildingCard.hpp, RoadBuildingCard.cpp: Implementation of the Road Building development card.
- YearOfPlentyCard.hpp, YearOfPlentyCard.cpp: Implementation of the Year of Plenty development card.
- Tile.hpp, Tile.cpp: Class representing resource tiles on the board.
- Vertex.hpp, Vertex.cpp: Class representing vertices on the board, each with specific resources.
- Dice.hpp, Dice.cpp: Simulates rolling dice to distribute resources based on dice rolls.
- Game.hpp, Game.cpp: Class managing game flow, turns, and victory conditions.
- test.cpp: Test cases to validate game mechanics, player actions, and board interactions.
  
# Compilation and Execution
To compile the project, use a C++ compiler supporting at least C++11 standard:

# Game Rules and Mechanics
- Players take turns to build settlements, roads, and cities.
- Resources (brick, wood, sheep, wheat, iron) are collected based on adjacent tiles and dice rolls.
- Development cards can be acquired and played to affect gameplay.
- Victory points are earned through settlements, cities, and certain development cards.

# Known Issues
- Issues related to resource distribution or player actions may occur under specific game conditions.
- Check the test cases (test.cpp) for expected behaviors and edge cases.
