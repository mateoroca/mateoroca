#include<iostream>
#include<vector>
using namespace std;

enum class COLOR { RED, GREEN, BLUE };
enum class SIZE  { SMALL, MEDIUM, LARGE };

//#define ALL(C) begin(C), end(C)

class Product
{
private:
  string m_name;
  COLOR  m_color;
  SIZE   m_size;
  
public:
  Product(string name,COLOR color, SIZE size)
  {
    this->m_name = name;
    this->m_color= color;
    this->m_size=  size;
  }
  string getName()  { return m_name;  }
  COLOR  getColor() { return m_color; }
  SIZE   getSize()  { return m_size;  }
};
////////////////////////////////////////////////////////////////////////
using Items = vector<Product*>;
////////////////////////////////////////////////////////////////////////
class Filter
{
public:
  virtual Items filter(Items items) =0;
};
////////////////////////////////////////////////////////////////////////

class FilterbyColor : public Filter
{   
  COLOR color;
public:
  FilterbyColor(COLOR color_)
  {
      color = color_;
  }
  Items filter(Items items) 
  {
    Items result;
    for (auto &i : items)
      if (i->getColor() == color)
        result.push_back(i);
    return result;
  }
};

////////////////////////////////////////////////////////////////////////

class FilterbySize : public Filter
{
  SIZE size;
public:

  FilterbySize(SIZE size_)
  {
      size = size_;
  }

  Items filter(Items items) 
  {
    Items result;
      for (auto &i : items)
        if (i->getSize() == size)
          result.push_back(i);
        return result;
  }
};
////////////////////////////////////////////////////////////////////////
class FilterbyColorAndSize : public Filter
{
  SIZE size;
  COLOR color;
public:

    FilterbyColorAndSize(const SIZE _size, const COLOR _color) 
    {
      size = _size;
      color = _color;
    }
    
    Items filter(Items items) 
    {
      Items result;
      for (auto &i : items)
        if (i->getSize() == size && i->getColor() == color)
          result.push_back(i);
        return result;
    }
};
////////////////////////////////////////////////////////////////////////
int main() {


  const Items allitems
  {
    new Product("aplee", COLOR::GREEN, SIZE::SMALL), // 0
    new Product("tree", COLOR::GREEN, SIZE::LARGE),  // 1
    new Product("house", COLOR::BLUE, SIZE::LARGE),  // 2
    new Product("guitar",COLOR::RED,SIZE::MEDIUM)
  };
  
  Filter* itemsBySizeAndColor = new FilterbyColorAndSize(SIZE::LARGE, COLOR::GREEN);
  
  for (Product* p : itemsBySizeAndColor->filter(allitems))
    cout << p->getName() << " is green & large\n";
  
  delete itemsBySizeAndColor;
  itemsBySizeAndColor = nullptr;
  
  itemsBySizeAndColor = new FilterbyColorAndSize(SIZE::SMALL, COLOR::GREEN);
   
  for (Product* p : itemsBySizeAndColor->filter(allitems))
    cout << p->getName() << " is green and small\n";
  

  Filter* itemsBySize = new FilterbySize(SIZE::MEDIUM);

  for (Product* p : itemsBySize->filter(allitems))
    cout << p->getName() << " is medium\n";


  
  delete itemsBySizeAndColor;
  delete itemsBySize;

  return 0;
}