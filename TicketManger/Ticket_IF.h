#include<iostream>
#include<memory>
using namespace std;
class TicketIF
{
    public:
    typedef std::shared_ptr<TicketIF> ptr;
    
};