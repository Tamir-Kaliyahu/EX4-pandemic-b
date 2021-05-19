#include "Researcher.hpp"

namespace pandemic
{

  Player &Researcher::discover_cure(Color c)
  {
    if (my_board.isCured(c))
    {
      return *this;
    }

    if (ColorCount.at(c) >= 5)
    {
      int counter = 0;
      Color c_temp;
      my_board.Cured_Des.at(c)=true;
      set<City> cards_to_eraes;
      for (const City &x : cards)
      {
        if (my_board.CityColor(x) == c)
        {
          cards_to_eraes.insert(x);
          counter++;
          if (counter == 5)
          {
            break;
          }
        }
      }

      for (auto &c1 : cards_to_eraes)
      {
        cards.erase(c1);
      }
      ColorCount.at(c) -= 5;
    }
    else
    {
      throw invalid_argument{"Cannot discover cure!"};
    }
    return *this;
  }

}