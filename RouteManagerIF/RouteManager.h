#include<Route.h>
#include<iostream>
#include<functional>
#include<list>
#include<memory>
#include "RouteManagerIF.h"
using namespace std;
class RouteManager :public RouteManagerIF
{
    private:
    RouteManager();
   public:
    std::enable_shared_from_this<RouteManager>
    {
        public:
        typedef std::shared_ptr<RouteManager> Ptr;
    }

        //void AddRoute();
        void DeleteRoute();
        void MakeFunctional();

};