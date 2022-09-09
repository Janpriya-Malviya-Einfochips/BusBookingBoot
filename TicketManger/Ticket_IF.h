
#include<memory>
class TicketIF
{
public:
    typedef std::shared_ptr<TicketIF> Ptr;

    TicketIF() {}
    viratual ~TicketIF() {}

    virtual void CancleTicket() = 0;

};