#include "Board.hpp"

using namespace std;
namespace pandemic{

City Board::ConvtoE(const std::string& str)
{
    //cout<< "ConvtoE str is: "<<str<<endl;
    if (str == "Algiers")
    {
        return City::Algiers;
    }

    if (str == "Atlanta")
    {
        return City::Atlanta;
    }
    if (str == "Baghdad")
    {
        return City::Baghdad;
    }
    if (str == "Bangkok")
    {
        return City::Bangkok;
    }
    if (str == "Beijing")
    {
        return City::Beijing;
    }
    if (str == "Bogota")
    {
        return City::Bogota;
    }
    if (str == "BuenosAires")
    {
        return City::BuenosAires;
    }
    if (str == "Cairo")
    {
        return City::Cairo;
    }
    if (str == "Chennai")
    {
        return City::Chennai;
    }
    if (str == "Chicago")
    {
        return City::Chicago;
    }
    if (str == "Delhi")
    {
        return City::Delhi;
    }
    if (str == "Essen")
    {
        return City::Essen;
    }
    if (str == "HoChiMinhCity")
    {
        return City::HoChiMinhCity;
    }
    if (str == "HongKong")
    {
        return City::HongKong;
    }
    if (str == "Istanbul")
    {
        return City::Istanbul;
    }
    if (str == "Jakarta")
    {
        return City::Jakarta;
    }
    if (str == "Johannesburg")
    {
        return City::Johannesburg;
    }
    if (str == "Karachi")
    {
        return City::Karachi;
    }
    if (str == "Khartoum")
    {
        return City::Khartoum;
    }
    if (str == "Kinshasa")
    {
        return City::Kinshasa;
    }
    if (str == "Kolkata")
    {
        return City::Kolkata;
    }
    if (str == "Lagos")
    {
        return City::Lagos;
    }
    if (str == "Lima")
    {
        return City::Lima;
    }
    if (str == "London")
    {
        return City::London;
    }
    if (str == "LosAngeles")
    {
        return City::LosAngeles;
    }
    if (str == "Madrid")
    {
        return City::Madrid;
    }
    if (str == "Manila")
    {
        return City::Manila;
    }
    if (str == "MexicoCity")
    {
        return City::MexicoCity;
    }
    if (str == "Miami")
    {
        return City::Miami;
    }
    if (str == "Milan")
    {
        return City::Milan;
    }
    if (str == "Montreal")
    {
        return City::Montreal;
    }
    if (str == "Moscow")
    {
        return City::Moscow;
    }
    if (str == "Mumbai")
    {
        return City::Mumbai;
    }
    if (str == "NewYork")
    {
        return City::NewYork;
    }
    if (str == "Osaka")
    {
        return City::Osaka;
    }
    if (str == "Paris")
    {
        return City::Paris;
    }
    if (str == "Riyadh")
    {
        return City::Riyadh;
    }
    if (str == "SanFrancisco")
    {
        return City::SanFrancisco;
    }
    if (str == "Santiago")
    {
        return City::Santiago;
    }
    if (str == "SaoPaulo")
    {
        return City::SaoPaulo;
    }
    if (str == "Seoul")
    {
        return City::Seoul;
    }
    if (str == "Shanghai")
    {
        return City::Shanghai;
    }
    if (str == "StPetersburg")
    {
        return City::StPetersburg;
    }
    if (str == "Sydney")
    {
        return City::Sydney;
    }
    if (str == "Taipei")
    {
        return City::Taipei;
    }
    if (str == "Tehran")
    {
        return City::Tehran;
    }
    if (str == "Tokyo")
    {
        return City::Tokyo;
    }
    if (str == "Washington")
    {
        return City::Washington;
    }
    throw std::invalid_argument("Not a City!");
}

std::string Board::Convtostr(City C)
{
    if (C == City::Algiers){
        return "Algiers";
    }
    if (C == City::Atlanta){
        return "Atlanta";
    }
    if (C == City::Baghdad){
        return "Baghdad";
    }
    if (C == City::Bangkok){
        return "Bangkok";
    }
    if (C == City::Beijing){
        return "Beijing";
    }
    if (C == City::Bogota){
        return "Bogota";
    }
    if (C == City::BuenosAires){
        return "BuenosAires";
    }
    if (C == City::Cairo){
        return "Cairo";
    }
    if (C == City::Chennai){
        return "Chennai";
    }
    if (C == City::Chicago){
        return "Chicago";
    }
    if (C == City::Delhi){
        return "Delhi";
    }
    if (C == City::Essen){
        return "Essen";
    }
    if (C == City::HoChiMinhCity){
        return "HoChiMinhCity";
    }
    if (C == City::HongKong){
        return "HongKong";
    }
    if (C == City::Istanbul){
        return "Istanbul";
    }
    if (C == City::Jakarta){
        return "Jakarta";
    }
    if (C == City::Johannesburg){
        return "Johannesburg";
    }
    if (C == City::Karachi){
        return "Karachi";
    }
    if (C == City::Khartoum){
        return "Khartoum";
    }
    if (C == City::Kinshasa){
        return "Kinshasa";
    }
    if (C == City::Kolkata){
        return "Kolkata";
    }
    if (C == City::Lagos){
        return "Lagos";
    }
    if (C == City::Lima){
        return "Lima";
    }
    if (C == City::London){
        return "London";
    }
    if (C == City::LosAngeles){
        return "LosAngeles";
    }
    if (C == City::Madrid){
        return "Madrid";
    }
    if (C == City::Manila){
        return "Manila";
    }
    if (C == City::MexicoCity){
        return "MexicoCity";
    }
    if (C == City::Miami){
        return "Miami";
    }
    if (C == City::Milan){
        return "Milan";
    }
    if (C == City::Montreal){
        return "Montreal";
    }
    if (C == City::Moscow){
        return "Moscow";
    }
    if (C == City::Mumbai){
        return "Mumbai";
    }
    if (C == City::NewYork){
        return "NewYork";
    }
    if (C == City::Osaka){
        return "Osaka";
    }
    if (C == City::Paris){
        return "Paris";
    }
    if (C == City::Riyadh){
        return "Riyadh";
    }
    if (C == City::SanFrancisco){
        return "SanFrancisco";
    }
    if (C == City::Santiago){
        return "Santiago";
    }
    if (C == City::SaoPaulo){
        return "SaoPaulo";
    }
    if (C == City::Seoul){
        return "Seoul";
    }
    if (C == City::Shanghai){
        return "Shanghai";
    }
    if (C == City::StPetersburg){
        return "StPetersburg";
    }
    if (C == City::Sydney){
        return "Sydney";
    }
    if (C == City::Taipei){
        return "Taipei";
    }
    if (C == City::Tehran){
        return "Tehran";
    }
    if (C == City::Tokyo){
        return "Tokyo";
    }
    if (C == City::Washington)
    {
        return "Washington";
    }
    return " ";
}

std::string Board::ConvColor(Color C)
{
    if (C == Color::Black)
    {
        return "Black";
    }
    if (C == Color::Blue){
        return "Blue";
    }
    if (C == Color::Yellow){
        return "Yellow";
    }
    if (C == Color::Red){
        return "Red";
    }
    return " ";
}

void Board::initBoard(const std::string &filename)
{
    ifstream myfile;
    myfile.open(filename);
    std::string line;
    std::string S_color;
    std::string CityA;
    std::string ni_City;
    Color city_color;
    

    while (getline(myfile, line))
    {
        CityA = "";
        S_color="";
        ni_City = "";
        size_t i = 0;
        while (line.at(i) != ' ')
        {
            CityA += line[i];
            i++;
        }
        i++;
        City A = ConvtoE(CityA);
        while (line.at(i) != ' ')
        {
            S_color += line[i];
            i++;
        }
        i++;
        Color c= Color::Black;
        if (S_color == "Yellow")
        {
            c = Color::Yellow;
        }
        if (S_color == "Red"){
            c = Color::Red;
        }
        if (S_color == "Blue"){
            c = Color::Blue;
        }
        if (S_color == "Black"){
            c = Color::Black;
        }
        
        CityColors.insert({A,c});
        //this->SicknessL[A] = 0;            // set cube lvl.
        SicknessL.insert({A,0});
        //this->research_station[A] = false; // by default research not built.
        research_station.insert({A ,false});
        //cout<<"line length is :"<<line.length()<<endl;
        this->Ni_Cities.insert({A,{}});

        while(i < line.length())
        {
            //cout<<"i is "<< i <<"and line[i] is: "<<line[i]<<endl;
            ni_City="";
            while (line[i] != ' '&& i < line.length())
            {
                ni_City += line[i];
                i++;
                //cout<<"ni_City is now: "<<ni_City<<endl;
            }
            i++;
            City B = ConvtoE(ni_City);
            this->Ni_Cities.at(A).insert(B);
            //B=Null;
        }
    }
    this->Cured_Des.insert({Color::Black, false});
    this->Cured_Des.insert({Color::Yellow, false});
    this->Cured_Des.insert({Color::Blue, false});
    this->Cured_Des.insert({Color::Red, false});
}

std::ostream &operator<<(std::ostream &os, const Board &BoardA)
{
    std::string City_Str;

    for (const auto &p : BoardA.SicknessL)
    {
        os << "" << Board::Convtostr(p.first) << " has " << p.second << "cubes." << std::endl;
    }

    for (const auto &p : BoardA.Cured_Des)
    {
        os << "Sickness cure found for color: " << Board::ConvColor(p.first) << " is: " << p.second << std::endl;
    }

    os << "built research stations so far:";

    for (const auto &p : BoardA.research_station)
    {
        if (p.second)
        {
            os << Board::Convtostr(p.first) << ", " << std::endl;
        }
    }

    return os;
}

bool Board::is_research(City c){
    return research_station.at(c);
}
void Board::research(City c){
    research_station.at(c)=true;
}

void Board::cure(Color c)
{
    Cured_Des.at(c)=true;
}

bool Board::isCured(Color c)
{
    if(Cured_Des.at(c))
        return true;
    return false;
}

bool Board::is_clean()
{

    for (auto const &x : SicknessL)
    {
        if (x.second > 0)
        {
            return false;
        }
    }
    return true;
}

int &Board::operator[](City CityA)
{
    return SicknessL[CityA];
}

void Board::remove_cures()
{
    this->Cured_Des.at(Color::Black) = false;
    this->Cured_Des.at(Color::Yellow) = false;
    this->Cured_Des.at(Color::Blue) = false;
    this->Cured_Des.at(Color::Red) = false;
}

bool Board::isNi(City c, City c2)
{
   if( this->Ni_Cities.at(c).count(c2)==1){
       return true;

   }
   return false;
    
}

Color Board::CityColor(City c)
{
    return CityColors.at(c);
}

void Board::reduceSick(City c, int x)
{
    if(SicknessL.at(c)-x>=0)
    {
    SicknessL.at(c)=-x;
    }
    /*
    else
    {
        throw invalid_argument{"cannot treat City!"};
    }
    */
}

bool Board::isSick(City c)
{
    if(SicknessL.at(c)>0)
    {
        return true;
    }
    return false;
}
}
