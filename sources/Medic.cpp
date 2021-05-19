#include "Medic.hpp"

namespace pandemic
{

  Player &Medic::treat(City c)
  {
    if (curr_city == c)
    {
      if (my_board[c]>0)
      {
        my_board[c]=0;
      }
      else
      {
        throw invalid_argument{"Sickness level is 0"};
      }
    }
    else
    {
      throw invalid_argument{"You cannot treat a city from here!"};
    }
    return *this;
  }

  Player &Medic::drive(City dest)
  {
    if (this->my_board.isNi(curr_city, dest) && curr_city != dest)
    {
      curr_city = dest;
      if (my_board[curr_city]>0)
      {
        if (my_board.isCured(my_board.CityColor(dest)))
        {
          my_board[curr_city]=0;
        }
      }
      /*
      else
      {
        throw invalid_argument{"Sickness level is 0"};
      }
      */
    }
    else
    {
      throw invalid_argument{"Error reaching destination!"};
    }
    return *this;
  }
}