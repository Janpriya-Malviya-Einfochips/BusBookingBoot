#include<iostream>
#include<memory>
#include "RouteManagerIF.h"
using namespace std;
class RouteIF :public RouteManagerIF
{
    private:
        RouteIF();
    public:

   
        typedef std::shared_ptr<Route> Ptr;


};