#include "importTax.h"
using namespace std;


double ImportTax:: returnPlus(Item  *item )
{
  bool isImported = item->getImported();
  
  if(isImported) return getTaxPlus(item->getShelfPrice());    
  else return 0; 
  
}

ImportTax::ImportTax():Tax("Import duty", IMPORTRATE)
{

}

