#include<iostream>
#include <list>
#include<functional>
#include<StationIF.h>
#include "RouteManagerIF.h"
using namespace std;
class Route:public RouteManagerIF
{
    private:
        Route();
    
    public:
    std::enable_shared_from_this<Route>
    {
        public:
        typedef std::shared_ptr<Route> Ptr;
    }
        list<StationIF>stationif;

};