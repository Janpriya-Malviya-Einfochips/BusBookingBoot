#include<iostream>
#include <list>
#include "StationIF.h"
#include "RouteIF.h"
#include "RouteManagerIF.h"
class Route:public RouteIF,public std::enable_shared_from_this<Route>
{
    private:
        Route(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);
        std::list<StationIF>m_station;
    public:
        typedef std::shared_ptr<Route>m_Ptr6;
        static RouteIF::m_Ptr6 CreateRoute(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);
};