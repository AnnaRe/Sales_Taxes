
#include "receipt.h"
#include "utility.h"
using namespace std;

Receipt:: Receipt(list<Item> * _items)
{
  items = _items;
  taxTotal=0;  
  total=0;                        
}

Receipt:: Receipt()
{
  items = new list<Item>;       
  taxTotal=0;  
  total=0;                          
}

Receipt:: ~Receipt()
{
  delete items;         
}

void Receipt::  printOut()
{
  taxTotal=0;  
  total=0;     
  cout<<endl<<"_______ Receipt______"<<endl<<endl;
  list<Item>:: iterator it=items->begin();    
  double taxAdd=0,itemPrice=0;
  for (it;it!=items->end(); it++)
  {                
     taxAdd =roundPositive(import.returnPlus(&*it) +sale.returnPlus(&*it)); //computes the amount of sales taxes paid
     itemPrice =(taxAdd + it->getShelfPrice()); 
     
     total = total+ (itemPrice*it->getQuantity()) ;//computes the total cost of the items
     taxTotal = taxTotal+(taxAdd*it->getQuantity());//computes the total amounts of sales taxes
    
     cout<< it->getQuantity()<<" ";
     if(it->getImported())cout<<"imported ";
     cout << it->getName();  
     printf(": %.2f\n",itemPrice);
  }
  
   cout<<endl<<"---------------------"<<endl;  
   printf("SALES TAXES \t: %.2f",taxTotal);
   cout<<endl<<"Total \t\t: " << total<<endl<<endl<<endl; 
}


