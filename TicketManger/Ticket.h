#include<iostream>
#include<memory>

using namespace std;
class Ticket:public std::enable_shared_from_this<Ticket>
{
    private:
        Ticket();
    
    public:
        typedef std::shared_ptr<Ticket> ptr;
        void genrateTicket();
        string getName();
        string getSource();
        string getDestination();
        int genratePNR();
        string getClasstype();
        string getStatus();
        int getSeatno();
        void DisplayTicket();
    
};
