#include<iostream>
#include<memory>
//#include"TicketmangerIF"
using namespace std;
class TicketManager
{
    private:
    TicketManager();
    public:
    std::enable_shared_from_this<TicketManager>
    {
        public:
        typedef std::shared_ptr<TicketManager> ptr;
    }
    
};
