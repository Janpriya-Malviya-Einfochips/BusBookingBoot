
#include<iostream>
#include<memory>
class Ticket_manager_IF
{
public:
    typedef std::shared_ptr<Ticket_manager_IF> ptr;
    virtual void book_ticket()=0;
    virtual void cancel_ticket()=0;
    virtual void prepared_chart()=0;

    
};

