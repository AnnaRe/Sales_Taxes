//  @ Project : SALES TAXES
//  @ File Name : receipt.h
//  @ Date : 30/10/2013

#ifndef __RECEIPT_H__
#define __RECEIPT_H__

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include "importTax.h"
#include "salesTax.h"

using namespace std;

class Receipt {
  
  public:    
             
    Receipt();
    ~Receipt();
    Receipt(list<Item> * _items);
    void printOut(); //prints and updates the receipt's content
    
  private:
      
    list<Item>* items;
    ImportTax import; 
    SalesTax sale;
    double taxTotal;
    double total;   
      
};



#endif
