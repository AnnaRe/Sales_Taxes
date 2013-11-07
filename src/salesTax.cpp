
#include "salesTax.h"

using namespace std;
using namespace good;

SalesTax::SalesTax():Tax("sales tax" , SALERATE)
{
  good_type g[]={ BOOK, FOOD, MEDICALPROD};
  exempts.assign(g,g+3) ;                                
}


double SalesTax:: returnPlus(Item *item)
{
  
 if(item->getType()!= BOOK && item->getType()!=FOOD && item->getType()!=MEDICALPROD) 
 return getTaxPlus(item->getShelfPrice());    
 
 else return 0; 
    
}
