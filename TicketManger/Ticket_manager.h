#include<iostream>
#include<memory>
class TicketManager:public  std::enable_shared_from_this<TicketManager>
{
    private:
        TicketManager();
    public:
        typedef std::shared_ptr<TicketManager> ptr;
   
    
};
