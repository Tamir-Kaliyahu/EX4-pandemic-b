#include "Scientist.hpp"

namespace pandemic{

  Player& Scientist::discover_cure(Color c){
    if(!my_board.isCured(c)&&ColorCount.at(c)>=this->num&&my_board.is_research(curr_city))
        {
            int counter=0;
            Color c_temp;
            set<City> cards_to_eraes;
            for (const City &x : cards)
            {
                if(my_board.CityColor(x)==c){
                    cards_to_eraes.insert(x);
                    counter++;
                    if(counter==num){
                        break;
                    }

                }

            }

            for(auto& c1:cards_to_eraes){
                cards.erase(c1);
            }
            ColorCount.at(c)-=num;
        }
        else
        {
            throw invalid_argument{"Cannot discover cure!"};
        }
        return *this;
  }
}