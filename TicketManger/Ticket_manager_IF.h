#ifndef _Ticket_manager_IF_H_
#define _Ticket_manager_IF_H_
#include<iostream>
#include<memory>
class Ticket_manager_IF
{
public:
    typedef std::shared_ptr<Ticket_manager_IF> Ptr;
    Ticket_manager_IF(){};
    virtual ~Ticket_manager_IF(){};
    virtual void BookTicket()=0;
    virtual void CancelTicket()=0;
    virtual void PreparedChart()=0; 
};
#endif

