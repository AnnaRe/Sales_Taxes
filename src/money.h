#ifndef __MONEY_H__
#define __MONEY_H__

#include <string>
#include <iostream>
#include <cstdlib>

 
using namespace std;

class Money
{
 public: 
	
    Money();
	Money(double _money);   
	Money operator+(const Money& b) const; //constructer for addition  
	Money operator-(const Money& b) const; //constructor for subtraction 
	Money operator*(double m) const; //constructor for multiply
	Money operator/(double d) const; //constructor for division 
 	friend ostream& operator<<(ostream& out, const Money& b); 
	bool operator==(const Money& b) const;
	double getMoney()const; 

 private: 
	
    double money;
}; 


#endif
