#include<iostream>
#include<memory>
#include "TicketIF.h"

class Ticket: public TicketIF , public std::enable_shared_from_this<Ticket>
{
public:
    typedef std::shared_ptr<Ticket> ptr;
    static TicketIF::Ptr CreateTickit( std::string personName , std::string srcStationCo );
        // void genrateTicket();
        // std::string getName();
        // std::string getSource();
        // std::string getDestination();
        // int genratePNR();
        // std::string getClasstype();
        // std::string getStatus();
        // int getSeatno();
        // void DisplayTicket();
private:
    Ticket( std::string personName , std::string srcStationCode , ......);

};
    
