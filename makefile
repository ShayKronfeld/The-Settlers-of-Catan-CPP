# shay kronfeld
# 322234782
# kronfeldshay@gmail.com

CXX=g++
CXXFLAGS=-std=c++11 -Wall -O0
LDFLAGS=-std=c++11 -Wall
SRCS = main.cpp Board.cpp Building.cpp Path.cpp Player.cpp Vertex.cpp Katan.cpp Tile.cpp Settlement.cpp Road.cpp City.cpp DevelopmentCard.cpp KnightCard.cpp RoadBuildingCard.cpp MonopolyCard.cpp VictoryPointCard.cpp YearOfPlentyCard.cpp
OBJS = $(SRCS:.cpp=.o)

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o main $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f test $(OBJS)