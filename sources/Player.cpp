#include "Player.hpp"

namespace pandemic
{

    Player &Player::drive(City dest)
    {
        if (this->my_board.isNi(curr_city, dest) && curr_city != dest)
        {
            curr_city = dest;
        }
        else
        {
            throw invalid_argument{"Error reaching destination!"};
        }
        return *this;
    }

    Player &Player::fly_direct(City dest)
    {
        if (curr_city != dest && cards.count(dest) == 1)
        {
            curr_city = dest;
            cards.erase(dest);
            Color c = my_board.CityColor(dest);
            ColorCount.at(c)--;
        }
        else
        {
            throw invalid_argument{"Error reaching destination!"};
        }
        return *this;
    }

    Player &Player::fly_charter(City dest)
    {
        if (curr_city != dest && cards.count(curr_city) == 1)
        {
            curr_city = dest;
            cards.erase(curr_city);
            Color c = my_board.CityColor(curr_city);
            ColorCount.at(c)--;
        }
        else
        {
            throw invalid_argument{"Error reaching destination!"};
        }
        return *this;
    }

    Player &Player::fly_shuttle(City dest)
    {
        if (curr_city!=dest &&my_board.is_research(curr_city) && my_board.is_research(dest))
        {
            curr_city = dest;
        }
        else
        {
            throw invalid_argument{"Error, can't shuttle there!"};
        }
        return *this;
    }

    Player &Player::build()
    {
        if (!my_board.is_research(curr_city) ){

        
        if( cards.count(curr_city) == 1)
        {
            my_board.research(curr_city);
            cards.erase(curr_city);
            Color c = my_board.CityColor(curr_city);
            ColorCount.at(c)--;
        }
        else
        {
            throw invalid_argument{"can't build research station!"};
        }
        return *this;
    }
    
    else{
        return *this;
    }
    }

    Player &Player::discover_cure(Color disease)
    {
        
        
        //cout<< "number of cards from color:" << ColorCount.at(disease)<<endl;
        if(my_board.isCured(disease)){
            return *this;
        }
       
        //cout<<" is reaserch for curr: "<<my_board.is_research(curr_city)<<endl;
        //cout<<" Colorcount for diseas: "<<ColorCount.at(disease)<<endl;
        if ( ColorCount.at(disease) >= 5 && my_board.is_research(curr_city))
        {
            int counter = 0;
            Color c_temp;
            my_board.Cured_Des.at(disease)=true;

            set<City> cards_to_eraes;
            for (const City &x : cards)
            {
                if(my_board.CityColor(x)==disease){
                    cards_to_eraes.insert(x);
                    counter++;
                    if(counter==5){
                        break;
                    }

                }

            }

            for(auto& c1:cards_to_eraes){
                cards.erase(c1);
            }
            ColorCount.at(disease)-=5;
                        

        }
        else
        {
            throw invalid_argument{"Cannot discover cure!"};
        }
    //     if (disease == Color::Black)
    //     {
    //     cout<< "Black"<<endl;
    //     }
    //     if (disease == Color::Blue){
    //         cout<< "Blue"<<endl;
    //     }
    // if (disease == Color::Yellow){
    //     cout<< "Yellow"<<endl;
    // }
    // if (disease == Color::Red){
    //     cout<< "Red"<<endl;
    // }
        // cout<<"Color Black bool:" <<my_board.Cured_Des.at(Color::Black)<<endl;
        // cout<<"Color Blue bool:" <<my_board.Cured_Des.at(Color::Blue)<<endl;
        // cout<<"Color Yellow bool:" <<my_board.Cured_Des.at(Color::Yellow)<<endl;
        // cout<<"Color Red bool:" <<my_board.Cured_Des.at(Color::Red)<<endl;
        return *this;
    }

    Player &Player::treat(City c)
    {
        if (curr_city == c)
        {
            if (my_board[c]>0)
            {
                if (my_board.Cured_Des.at(my_board.CityColor(c)))
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
            throw invalid_argument{"You cannot treat a city from here!"};
        }
        return *this;
    }

    Player &Player::take_card(City c)
    {
        if (cards.count(c)==0)
        {
            cards.insert(c);
            Color c1 = my_board.CityColor(c);
            ColorCount.at(c1)++;
        }
        return *this;
    }

    std::string Player::role()
    {
        return this->Player_role;
    }

};