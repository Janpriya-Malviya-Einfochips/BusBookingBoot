#include<iostream>
#include<memory>
#include"Ticket.h"
void Ticket::DisplayTicket()
{
    std::cout<<"Source : "<<getSource()<<endl;
    std::cout<<"Destination : "<<getDestination()<<endl;
    std::cout<<"PNR : "<<genratePNR()<<endl;
    std::cout<<"TYPE :"<<getClasstype()<<endl;
    std::cout<<"Ticket staus : "<<getStatus()<<endl;
    std::cout<<"Seat NO. : "<<getSeatno()<<endl;
}


TicketIF::Ptr Ticket::CreateTickit( std::string personName  )
{
    TicketIF::Ptr pTickit( personName );
    reutrn   pTickit;
}

Ticket::Ticket(std::string personName)
{


}

