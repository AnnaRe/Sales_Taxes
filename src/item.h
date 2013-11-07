//  @ Project : SALES TAXES
//  @ File Name : item.h
//  @ Date : 30/10/2013

#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>
#include <iostream>
#include <cstdlib>
#include "good.h"
#include "money.h"

using namespace std;
using namespace good;

class Item {
      
public: 
        
 void print()const; 
 string getName();
 double getShelfPrice(); 
 bool getImported();
 good_type getType();
 int getQuantity();  
 Item(string _name,good_type _type, bool _imported,int _quantity, double _price );            
 Item();
      
private: 
              
 string name;
 good_type type;
 bool imported;
 Money price; 
 int quantity;  
 
};


#endif
