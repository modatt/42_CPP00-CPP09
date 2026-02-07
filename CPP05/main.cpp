#include <iostream> 

class   Printer
{
    private:
    std::string _name;
    int _availablePaper;
    public:
    Printer(std::string name, int paper) {
        _name = name;
        _availablePaper = paper;
    }
    void    Print(std::string txDoc) {
        std::cout << "printing ..." << txDoc << std::endl;
    }
};

int     main(void)
{
    Printer myPrinter("HP Deskjet 123", 10);
    myPrinter.Print("hello my name is modat"); 
    return 0;
}