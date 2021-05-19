#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;
namespace pandemic
{
   class Researcher: public Player {

        public:
            Researcher(Board& myBoard, City c): Player(myBoard, c, "Researcher") {}
            Player& discover_cure(Color c) override;
    };
}