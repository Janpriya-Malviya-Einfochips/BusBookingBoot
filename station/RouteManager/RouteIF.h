#include<iostream>
#include<memory>
#include "RouteManagerIF.h"
class RouteIF 
{
    public:
        RouteIF(){};
        typedef std::shared_ptr<RouteIF> m_Ptr5;
        virtual ~RouteIF(){};
        
};