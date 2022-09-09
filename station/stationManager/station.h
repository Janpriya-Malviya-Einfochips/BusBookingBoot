#include<iostream>
#include<memory>
#include "StationIF.h"
class Station:public std::enable_shared_from_this<Station>
{
    private:
        Station();
    public:
        typedef std::shared_ptr<Station> m_Ptr;
        enum Station_Code{ Ahm ,Abu ,pali,kalol};
        std::string m_stName;
        bool m_isFunctional;
        bool m_isJunctionStop;
        bool m_isRouteAvailable;
};