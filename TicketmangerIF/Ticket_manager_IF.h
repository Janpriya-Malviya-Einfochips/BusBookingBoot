
#include<iostream>
#include<memory>
using namespace std;
class Ticket_manager_IF
{
public:
    typedef std::shared_ptr<Ticket_manager_IF> ptr;
    void book_ticket();
    void cancel_ticket();
    void prepared_chart();

    
};

