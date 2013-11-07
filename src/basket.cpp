
#include "basket.h"

using namespace std;


Basket::Basket(list<Item> * _items)
{
  items = _items;              
}

Basket::Basket()
{
   items = new list<Item> ;   
}

Basket:: ~Basket()
{
 delete items; 
};

void Basket:: printIn()const
{
  cout<< "____ Basket's content ____"<<endl<<endl<<endl;
  
  list<Item>:: const_iterator it=items->begin(); 
  for(it;it!=items->end(); it++) 
  {
    it->print();                      
  } 
  
  cout<<endl;
}

Receipt Basket::makeReceipt()
{
  Receipt r= Receipt( items); 
  r.printOut();     
  return r;               
}
