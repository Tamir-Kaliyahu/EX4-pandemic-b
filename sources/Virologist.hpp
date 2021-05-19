#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"


using namespace std;
namespace pandemic
{
   class Virologist: public Player {

        public:
            Virologist(Board& myBoard, City c): Player(myBoard, c, "Virologist") {}
            Player& treat(City c) override;
    };
}
