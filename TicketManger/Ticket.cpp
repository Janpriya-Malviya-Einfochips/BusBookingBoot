#include<iostream>
#include<memory>
#include"Ticket.h"
using namespace std;
void Ticket::displayticket()
{
    cout<<"Source : "<<getsource()<<endl;
    cout<<"Destination : "<<getdestination()<<endl;
    cout<<"PNR : "<<genratePNR()<<endl;
    cout<<"TYPE :"<<getclasstype()<<endl;
    cout<<"Ticket staus : "<<getstatus()<<endl;
    cout<<"Seat NO. : "<<getseatno()<<endl;
}
