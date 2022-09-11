#include<iostream>
#include<memory>
#include "StationIF.h"
class Station:public StationIF, public std::enable_shared_from_this<Station>
{
    private:
        //typedef std::shared_ptr<Station>Ptr;
        Station(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);    
    public:
        typedef std::shared_ptr<Station> m_Ptr;
        static StationIF::m_Ptr1 AddStation(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);
        enum Station_Code{ Ahm ,Abu ,pali,kalol};
        std::string m_stName;
        bool m_isFunctional;
        bool m_isJunctionStop;
        bool m_isRouteAvailable;
};