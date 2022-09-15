#ifndef _Ticket_IF_H_INC
#define _Ticket_IF_H_INC
#include<memory>
class TicketIF
{
public:
    typedef std::shared_ptr<TicketIF> Ptr;

    TicketIF(){};
    virtual ~TicketIF(){};

    //virtual void CancleTicket() = 0;
};
#endif