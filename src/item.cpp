#include "item.h"
using namespace std;

Item::Item(string _name,good_type _type, bool _imported,int _quantity, double _price)
{
  name= _name;
  type= _type;
  imported= _imported;
  quantity= _quantity;
  price= Money(_price);
                 
}

Item::Item()
{
  name= "no items";
  type= good::OTHERS;
  imported= false;
  quantity= 1;
  price= Money(0.00);
                    
}

void Item::print() const  
{
  cout<<quantity;
  if(imported)cout<<" imported";   
  cout<<" "<<name;           
  printf(" at %.2f \n",price.getMoney());        
}

 double Item::getShelfPrice()
{
  return price.getMoney() ;     
} 


string Item:: getName()
{
  return name;            
}

bool Item::getImported()
{
  return imported;      
} 

good_type Item::getType()
{
  return type;      
} 

int Item::getQuantity()
{
  return quantity;      
} 

