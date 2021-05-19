#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class Scientist: public Player {
        int num;

        public:
            Scientist(Board& myBoard, City c, int a): Player(myBoard, c, "Scientist"), num(a) {}
            Player& discover_cure(Color c) override;
    };
}