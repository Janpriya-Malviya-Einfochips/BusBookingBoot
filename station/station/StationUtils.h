#include<iostream>
#include<memory>
#include<map>
#include<string>
#include<tuple>
namespace StationUtils 
{
enum StationName 
    {
        AHMEDABAD,
        ABU , 
        PALI,
        KALOL,
    }; 
// StationCode Enum_to_station(int );
// StationCode getstationToenum (StationCode );
static std::map<enum StationCode , std::tuple<std::string,std::string> > StationList{};

}
// class StationUtils
// {
//     private:
//     StationUtils()
//      {
//      }

// };

