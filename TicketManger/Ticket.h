#ifndef _Ticket_H_
#define _Ticket_H_
#include<iostream>
#include<memory>
#include"Ticket_IF.h"

class Ticket:public TicketIF,public std::enable_shared_from_this<Ticket>
{
private:
    Ticket( std::string personName , std::string srcStationCode ,std::string desStationCo , std::string ClassType );
public:
    typedef std::shared_ptr<Ticket> ptr;
    static TicketIF::Ptr CreateTicket( std::string personName ,std::string srcStationCo , std::string desStationCo, std::string ClassType);
        // void genrateTicket();
        // std::string getName();
        // std::string getSource();
        // std::string getDestination();
        std::string genratePNR();
        // std::string getClasstype();
        // std::string getStatus();
        // int getSeatno();
        // void DisplayTicket();
    virtual ~Ticket(){};


};
#endif
