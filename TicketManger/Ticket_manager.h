#ifndef _Ticket_manager_H_
#define _Ticket_manager_H_
#include<iostream>
#include<memory>
#include"Ticket_manager_IF.h"
class TicketManager: public Ticket_manager_IF , public  std::enable_shared_from_this<TicketManager>
{
    private:
        TicketManager();
    public:
        typedef std::shared_ptr<TicketManager> Ptr;
        static Ticket_manager_IF::Ptr CreateManager();
        void BookTicket();
        void CancelTicket();
        void PreparedChart();
        virtual ~TicketManager(){};

       
    
};
#endif
