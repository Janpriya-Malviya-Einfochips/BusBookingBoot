#include<iostream>
#include<list>
#include<memory>
#include "RouteManagerIF.h"
#include"Route.h"
class RouteManager :public RouteManagerIF, public std::enable_shared_from_this<RouteManager>
{
private:
    RouteManager(std:: string srcStation , std:: string destStation);
    void m_DeleteRoute();
    void m_MakeFunctional();
public:
    typedef std::shared_ptr<RouteManager>Ptr;
};