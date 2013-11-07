
#ifndef __TAX_H__
#define __TAX_H__

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include "item.h"
#include "utility.h"


using namespace std;

class Tax 
{
  public:
  
   virtual  double returnPlus(Item  *item );
   Tax( string _name,  double _rate);            
   Tax();
   virtual ~Tax(){};
  
  protected: 
   
   string name;
   double rate; 
   double getTaxPlus( double price);
   
};




#endif
