
#include<iostream>
#include<memory>
#include<map>
#include"Ticket.h"
#include"Ticket_IF.h"

Ticket::Ticket( std::string personName , std::string srcStationCode ,std::string desStationCo , std::string ClassType )
{
    // std::string TicketID;
    // TicketID=genratePNR();


}
TicketIF::Ptr Ticket::CreateTicket(std::string personName ,std::string srcStationCo , std::string desStationCo, std::string ClassType)
{
    TicketIF::Ptr pTickit( new Ticket( personName , srcStationCo ,desStationCo, ClassType) );
    return pTickit;
}
// std::string Ticket::genratePNR()
// {
//     return 
// }



