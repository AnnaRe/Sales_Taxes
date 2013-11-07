
#ifndef __IMPORTTAX_H__
#define __IMPORTTAX_H__


#include <cstdlib>
#include <list>
#include "tax.h"
#define RATE 0.05

using namespace std;

class ImportTax : public Tax
{
  public:     
   double returnPlus(Item  *item ) ;
   ImportTax();   

} ;









#endif
