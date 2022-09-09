#include<iostream>
#include<memory>
#include"Ticket.h"


TicketIF::Ptr Ticket::CreateTicket( std::string personName  )
{
    TicketIF::Ptr pTickit( new Ticket( personName ) );
    reutrn  pTickit;
}

Ticket::Ticket(std::string personName)
{


}

