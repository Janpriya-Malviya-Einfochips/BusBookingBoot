#include<iostream>
#include<memory>

using namespace std;
class Ticket
{
    private:
    Ticket();
    
    public:
    std::enable_shared_from_this<Ticket>
    {
        public:
        typedef std::shared_ptr<Ticket> ptr;
    }
    public:
    
    void genrateticket();
    string getname();
    string getsource();
    string getdestination();
    int genratePNR();
    string getclasstype();
    string getstatus();
    int getseatno();
    void displayticket();
    
};
