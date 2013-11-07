
#include "Utility.h"
#include <cmath>
using namespace std;


 double roundPositive ( double number) 
{ 
 float inter,frac= modf(number*10, &inter); // Breaks number into an integral and a fractional part
 
 if(frac> 0.5)  inter+=1;  
 if(0<frac && frac<=0.5) return ((double)(inter+ 0.5)/10);
 return(double)inter/10;
}


