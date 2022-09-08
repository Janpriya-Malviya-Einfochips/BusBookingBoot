#include<iostream>
#include<string>
#include<memory>
#include "StationIF.h"
using namespace std;
class Station:public StationIF
{
    
    public:
    std::enable_shared_from_this<Station>
    {
        public:
        typedef std::shared_ptr<Station> Ptr;
    }

   
    enum Station_Code{ Ahm ,Abu ,pali,kalol};
    string stName;
    bool IsFunctional;
    bool IsJunctionStop;
    bool IsRouteAvailable;
    private:
    Station(string stationName);

    
    
    


};