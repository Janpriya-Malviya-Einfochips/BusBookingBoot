#include<iostream>
#include <list>
#include "StationIF.h"
#include "RouteManagerIF.h"
class Route:public std::enable_shared_from_this<Route>
{
    private:
        Route();
        std::list<StationIF>m_station;
    public:
        typedef std::shared_ptr<Route>m_Ptr6;
};