#include "Virologist.hpp"

namespace pandemic
{

  Player &Virologist::treat(City c)
  {
    if (curr_city == c)
    {
      if (my_board[c]>0)
      {
        if (my_board.isCured(my_board.CityColor(c)))
        {
          my_board[c]=0;
        }
        else
        {
          my_board[c]--;
        }
      }
      else
      {
        throw invalid_argument{"Sickness level is 0"};
      }
    }
    else
    {
      if (cards.count(c) == 1)
      {
        if (my_board[c]>0)
        {
          if (my_board.isCured(my_board.CityColor(c)))
          {
            my_board[c]=0;
          }
          else
          {
            my_board[c]--;
          }
          cards.erase(c);
          Color c1 = my_board.CityColor(c);
          ColorCount.at(c1)--;
        }
        else
        {
          throw invalid_argument{"Sickness level is 0"};
        }
        return *this;
      }
      else
      {
        throw invalid_argument{"You cannot treat a city without the required card!"};
      }
    }
    return *this;
  }
}