#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class FieldDoctor: public Player {

        public:
            FieldDoctor(Board& myBoard, City c): Player(myBoard, c, "FieldDoctor") {}
            Player& treat(City c) override;
    };
};