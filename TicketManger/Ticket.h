#include<iostream>
#include<memory>
class Ticket:public std::enable_shared_from_this<Ticket>
{
    private:
        Ticket();
    
    public:
        typedef std::shared_ptr<Ticket> ptr;
        void genrateTicket();
        std::string getName();
        std::string getSource();
        std::string getDestination();
        int genratePNR();
        std::string getClasstype();
        std::string getStatus();
        int getSeatno();
        void DisplayTicket();
    
};
