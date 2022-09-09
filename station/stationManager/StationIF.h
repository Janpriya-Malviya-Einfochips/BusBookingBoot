#include<iostream>
#include<memory>
class StationIF
{
    public:
        StationIF();
        typedef std::shared_ptr<StationIF> m_Ptr1;
};