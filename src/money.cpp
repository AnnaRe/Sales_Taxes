
#include "money.h"
#include <cmath> 

using namespace std;

Money::Money()
{
 money=0;
}

Money::Money( double _money)
{
  float inter, decimal = modf((float)_money*100,&inter); //keeps only the first 2 decimal digits
  money= (double)inter; // prices will be stored like this: 25.99 -> 2599.0 
}

Money Money::operator+(const Money& b2) const
{
  return Money((money+b2.money)/100);
}
Money Money::operator-(const Money& b2) const 
{
  return Money((money-b2.money)/100);
}

Money Money::operator*(double m) const
{
  return Money((money*m/100) );      
}

Money Money::operator/(double d) const
{
 return Money((money/d*100)); 
}

bool Money::operator==(const Money& b2) const
{
   return (money == b2.money);
}

double Money:: getMoney() const
{
  return money/100;     
}

ostream& operator<<(ostream& out, const Money& b)
{
  out<<b.getMoney();  
  return out;       
}


