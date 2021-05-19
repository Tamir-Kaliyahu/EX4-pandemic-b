#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class GeneSplicer: public Player {

        public:
            GeneSplicer(Board& myBoard, City c): Player(myBoard, c, "GeneSplicer") {}
            Player& discover_cure(Color c) override;
    };
}