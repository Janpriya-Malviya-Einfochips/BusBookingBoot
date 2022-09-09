#include<iostream>
#include<list>
#include<memory>
#include "RouteManagerIF.h"
#include"Route.h"
using namespace std;
class RouteManager : public std::enable_shared_from_this<RouteManager>
{
    private:
        RouteManager();
        void m_DeleteRoute();
        void m_MakeFunctional();
    public:
        typedef std::shared_ptr<RouteManager> m_Ptr4;
};