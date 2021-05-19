#include "Dispatcher.hpp"

namespace pandemic
{

  Player &Dispatcher::fly_direct(City c)
  {
    if (my_board.is_research(curr_city)&&c!=curr_city)
    {
      curr_city = c;
    }
    else
    {
      throw invalid_argument{"Error reaching destination!"};
    }
    return *this;
  }
}