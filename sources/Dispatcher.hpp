#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class Dispatcher: public Player {

        public:
            Dispatcher(Board& myBoard, City c): Player(myBoard, c, "Dispatcher") {}
            Player& fly_direct(City c) override;
    };
}