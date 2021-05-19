#pragma once
#include "City.hpp"
#include "Board.hpp"

namespace pandemic{
    
    class Player{
        protected:
            std::string Player_role;
            Board& my_board;
            City curr_city;
            map<enum Color, int> ColorCount;
        public:
            Player(Board& BoardA ,City c, std::string role): my_board(BoardA), curr_city(c), Player_role(role){
                ColorCount.insert({Color::Black,0});
                ColorCount.insert({Color::Blue,0});
                ColorCount.insert({Color::Red,0});
                ColorCount.insert({Color::Yellow,0});
            }
            set< City> cards;// replace
            virtual Player& drive(City dest);
            virtual Player& fly_direct(City dest);
            virtual Player& fly_charter(City dest);
            virtual Player& fly_shuttle(City dest);
            virtual Player& build();
            virtual Player& discover_cure(Color disease);
            virtual Player& treat(City c);
            Player& take_card(City c);
            std::string role();

           
    };
}
