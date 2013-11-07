#include "SimpleTest.h"

using namespace std;

int Test() 
{
  Item* it  = new Item("book",good::BOOK,false,1,12.49); 
  Item* it2 = new Item("music CD",good::OTHERS,false,1,14.99); 
  Item* it3 = new Item("chocolate bar",good::FOOD,false,1,0.85); 
  list<Item>* s = new list<Item>;
  s->push_back(*it);
  s->push_back(*it2);
  s->push_back(*it3);
  Basket* ba= new Basket(s); 
  cout<<endl<<"Ex#1"<<endl<<endl;
  ba->printIn();
  Receipt r=ba->makeReceipt(); 
  

  Item* it7 = new Item("box of chocolates",good::FOOD,true,1,10.00); 
  Item* it8 = new Item("bottle of perfume",good::OTHERS,true,1,47.50);  
  list<Item>* s3 = new list<Item>;
  s3->push_back(*it7);
  s3->push_back(*it8);
  Basket* ba3= new Basket(s3); 
  cout<<endl<<"Ex#2"<<endl<<endl;
  ba3->printIn();
  Receipt r3=ba3->makeReceipt(); 


  Item* it4= new Item("bottle of perfume",good::OTHERS,true,1,27.99); 
  Item* it5= new Item("bottle of perfume",good::OTHERS,false,1,18.99); 
  Item* it6= new Item("packet of headache pills",good::MEDICALPROD,false,1,9.75); 
  Item* it9= new Item("box of chocolates",good::FOOD,true,1,11.25); 
  list<Item>* s2 = new list<Item>;
  s2->push_back(*it4);
  s2->push_back(*it5);
  s2->push_back(*it6);
  s2->push_back(*it9);
  Basket* ba2 = new Basket(s2); 
  cout<<endl<<"Ex#3"<<endl<<endl;
  ba2->printIn();
  Receipt r2=ba2->makeReceipt(); 
  

  return 0;

};
