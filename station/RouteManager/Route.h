#include<iostream>
#include <list>
#include "StationIF.h"
#include "RouteIF.h"
#include "RouteManagerIF.h"
class Route:public RouteIF,public std::enable_shared_from_this<Route>
{
private:
    Route(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);
    std::list<StationIF::ptr>m_station;
public:
    typedef std::shared_ptr<Route>Ptr;
    static RouteIF::Ptr CreateRoute(std::string m_stName , std:: string srcStationCode , std:: string destStationCode);
};