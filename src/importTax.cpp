

#include "importTax.h"
using namespace std;


double ImportTax:: returnPlus(Item  *item )
{
  
  if(item->getImported()) return getTaxPlus(item->getShelfPrice());    
  else return 0; 
  
  
}

ImportTax::ImportTax():Tax("import", RATE)
{

}

