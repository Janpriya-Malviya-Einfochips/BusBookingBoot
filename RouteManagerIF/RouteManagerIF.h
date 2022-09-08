#include<iostream>
#include<list>
#include "Route.h"
using namespace std; 
 class RouteManagerIF
 {
    public:
    list<Route>routes; 
   virtual void AddRoute()=0;
 };