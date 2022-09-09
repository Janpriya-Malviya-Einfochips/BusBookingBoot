#include<iostream>
#include<list>
#include "Route.h" 
class RouteManagerIF
{
    public:
      RouteManagerIF();
      virtual ~RouteManagerIF();
      typedef std::shared_ptr<RouteManagerIF>m_Ptr3;
    private:
      std::list<Route>m_routes; 
      virtual void AddRoute()=0;   
};