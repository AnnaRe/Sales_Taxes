
#ifndef __BASKET_H__
#define __BASKET_H__

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include "receipt.h"
 
using namespace std;

class Basket 
{
      private:
        list<Item>* items;
      
      public:
         void printIn()const;  //prints the basket's content  
         Receipt makeReceipt(); //creates the receipt associated to the basket
         Basket(list<Item> * _items);
         Basket();
         ~Basket();
};




#endif

