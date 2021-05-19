#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class Medic: public Player {

        public:
            Medic(Board& myBoard, City c): Player(myBoard, c, "Medic") {}
            Player& treat(City c) override;
            Player& drive(City c) override;
    };
}