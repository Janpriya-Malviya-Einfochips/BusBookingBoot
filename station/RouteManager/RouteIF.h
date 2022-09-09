#include<iostream>
#include<memory>
#include "RouteManagerIF.h"
using namespace std;
class RouteIF 
{
    public:
        RouteIF();
        typedef std::shared_ptr<RouteIF> m_Ptr5;
};