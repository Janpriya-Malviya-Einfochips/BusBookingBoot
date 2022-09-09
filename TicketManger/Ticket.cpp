#include<iostream>
#include<memory>
#include"Ticket.h"
using namespace std;
void Ticket::DisplayTicket()
{
    cout<<"Source : "<<getSource()<<endl;
    cout<<"Destination : "<<getDestination()<<endl;
    cout<<"PNR : "<<genratePNR()<<endl;
    cout<<"TYPE :"<<getClasstype()<<endl;
    cout<<"Ticket staus : "<<getStatus()<<endl;
    cout<<"Seat NO. : "<<getSeatno()<<endl;
}
