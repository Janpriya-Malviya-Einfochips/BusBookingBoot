#include<iostream>
#include<memory>
class TicketIF
{
    public:
    typedef std::shared_ptr<TicketIF> ptr;
    
};