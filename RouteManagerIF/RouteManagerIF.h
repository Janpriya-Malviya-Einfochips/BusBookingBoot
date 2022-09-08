#include<iostream>
#include<list>
#include "Route.h"
using namespace std; 
 class RouteManagerIF
 {
    private:
      RouteManagerIF();
    public:
        typedef std::shared_ptr<RouteManagerIF> Ptr;
    
    list<Route>routes; 
    virtual void AddRoute()=0;
    virtual ~RouteManagerIF();
 };