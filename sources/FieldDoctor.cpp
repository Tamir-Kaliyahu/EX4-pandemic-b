#include "FieldDoctor.hpp"

namespace pandemic{

  Player& FieldDoctor::treat(City c){
    if (curr_city == c || my_board.isNi(curr_city,c))
        {
            if (my_board[c])
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
            throw invalid_argument{"You cannot treat a city from here! try getting closer"};
        }
        return *this;
  }
}