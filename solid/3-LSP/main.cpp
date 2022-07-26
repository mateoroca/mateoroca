#include<iostream>
#include <cassert>
using namespace std;

class Figure
{
  public:

   virtual uint32_t get_width()=0;
   virtual uint32_t area()=0;
 
};


////////////////////////////////////////////////////////////////////////////////////////////////////

class Rectangle : public Figure
{
private:
  uint32_t m_width, m_height;
public:

    Rectangle(uint32_t windth,uint32_t height):m_width(windth),m_height(height){}
   uint32_t get_width() { return m_width; }
   uint32_t get_height(){ return m_height; }
   uint32_t area(){return m_height*m_height;}

   
};
////////////////////////////////////////////////////////////////////////////////////////////////


class Square: public Figure
{
private:
  uint32_t side;

public:
    Square(uint32_t _side) : side(_side) {}  
    uint32_t get_width() { return side; }
    uint32_t area(){return side*side;}
     
};





/////////////////////////////////////////////////////////////////////////////////////////////



void process(Figure* figure,uint32_t condition) 
{
     assert(figure->area() == condition); // Fails for Square <--------------------
}


/////////////////////////////////////////////////////////////////////////////////////////////////7


int main() {
  
  Figure* r = new Rectangle(10,10);

  uint32_t rectangleCondition = (r->get_width() * 10);

    process(r,rectangleCondition);

  Figure* s = new Square(20);

  uint32_t squarecondition = (s->get_width()*10);

    process(s,squarecondition); 


    delete r,s;
    
    
    return 0;
}