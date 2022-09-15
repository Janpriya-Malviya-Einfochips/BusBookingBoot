#include<iostream>
#include<memory>
#include<functional>
#include"Ticket_manager_IF.h"
#include"Ticket_manager.h"
#include"Ticket.h"
using namespace std::placeholders;

TicketManager::TicketManager()
{
    
}
Ticket_manager_IF::Ptr TicketManager::CreateManager()
{
    Ticket_manager_IF::Ptr pManager(new TicketManager());
    return pManager;
   
    
}
void TicketManager::BookTicket()
{
    std::cout<<"bookticket"<<std::endl;
    // TicketIF::Ptr tick;
    // tick->CreateTicket("name","source","des","class");
}
void TicketManager::CancelTicket()
{

}
void TicketManager::PreparedChart()
{

}

