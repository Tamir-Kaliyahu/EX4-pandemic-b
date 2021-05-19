#include "OperationsExpert.hpp"

using namespace std;
namespace pandemic
{
    Player& OperationsExpert::build()
    {
        if(!my_board.is_research(curr_city))
        {
            my_board.research(curr_city);
        }
        return *this;
    }
};