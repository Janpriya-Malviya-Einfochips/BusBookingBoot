#include<iostream>
#include<list>
#include "Route.h" 
class RouteManagerIF
{
public:
  RouteManagerIF();
  virtual ~RouteManagerIF();
  typedef std::shared_ptr<RouteManagerIF>Ptr;
  virtual void AddRoute()=0;  
private:
  std::list<RouteManagerIF::ptr>m_routes;         
};