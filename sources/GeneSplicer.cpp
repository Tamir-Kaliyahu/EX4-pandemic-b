#include "GeneSplicer.hpp"

namespace pandemic
{

  Player &GeneSplicer::discover_cure(Color c)
  {
    
    
    if (!my_board.isCured(c) && cards.size() >= 5 && my_board.is_research(curr_city))
    {
      int counter = 0;
      Color c_temp;
      set<City> cards_to_eraes;
            for (auto &x : cards)
            {
                
                    cards_to_eraes.insert(x);
                    counter++;
                    if(counter==5){
                        break;
                    }

                }

            

            for(auto& c1:cards_to_eraes){
                cards.erase(c1);
                Color temp = my_board.CityColor(c1);
                
                ColorCount.at(temp)--;
            }
    }
    else
        {
            throw invalid_argument{"Cannot discover cure!"};
        }
    return *this;
  }
}