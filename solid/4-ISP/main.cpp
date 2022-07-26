#include<iostream>
using namespace std;

struct Document
{
    string title = "the exemple";
    string text = "hello ,this is a exemple";
}doc;

class Iprint
{
    public:

    virtual void print(Document &doc) = 0;
};
////////////////////////////////////////////////////7
class Ifax
 {
 public:
    
    virtual void fax() = 0;


 };

class Iscan
 {
    public:
    virtual void scan() = 0;
 };
/////////////////////////////////////////////////////


class MultiFunctionPrinter :public Iprint,public Ifax,public Iscan 
{ 
    public:

        void print(Document &doc)
        { 
             cout << doc.title << endl
                  <<doc.text   << endl;
        }
        void fax()
        {
           cout << "sending a fax" << endl;
        }
        void scan()
        {
           cout << "scanning a drawing" <<endl;
        }
};

////////////////////////////////////////////////////////////////////////////////////


class Scanner : public Iscan 
{ 
    public:
            void scan()
            {
               cout << "scanning a text" << endl;
            }
};
//////////////////////////////////////////////////////////////////////////////////////



int main(int argc, char const *argv[])
{

    Scanner* scanner = new Scanner();

    scanner->scan();

    MultiFunctionPrinter* Printer = new MultiFunctionPrinter();

    Printer->fax();
    Printer->print(doc);
    Printer->scan();
     
    delete scanner;
    delete Printer;
     

    return 0;
}
