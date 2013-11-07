
#include "tax.h"
using namespace std;

Tax::Tax (  string _name, double _rate)
{
  name = _name;
  rate = _rate;         
}

Tax::Tax()
{
  name= "newTax";
  rate= 0.05;         
}


double Tax::getTaxPlus(double price)
{  
  return ( price *rate) ;    
}

double Tax:: returnPlus(Item  *item )
{
  
}

