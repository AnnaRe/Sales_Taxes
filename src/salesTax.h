
#ifndef __SALESTAX_H__
#define __SALESTAX_H__

#include <cstdlib>
#include <vector>
#include "tax.h"
#define SALERATE 0.10

using namespace std;

class SalesTax : public Tax
{
  public:    
   
   double returnPlus(Item  *item ) ;  
   SalesTax();
  
  private:
   
   vector<good::good_type> exempts; //contains all the exempts product
                         
} ;









#endif
