#ifndef doubly_H
#define doubly_H
#include <iostream>
using namespace std; 
template <class x>
struct Dnode
{
  x info;
  Dnode<x> *bck;
  Dnode<x> *nxt; 
};



template <class x>
class doubly
{
  protected: 
  int length; 
  Dnode<x> *first; 
  Dnode<x> *last; 
  
  public:
  
   
  friend ostream& operator<<(ostream& osObject, const doubly<x>& nodez)
  {
  osObject << nodez->info;

  return osObject;
  }

  friend istream& operator>>(istream& isObject, const doubly<x>& nodez)
  {
    x stuff; 
    isObject >> stuff; 
    nodez.insert(stuff); 

    return isObject;
  }

  doubly(); //default constructor
  doubly(const doubly<x>& other); //copy constructor 
  ~doubly(); //destructors  
  const doubly<x>& operator=(const doubly<x> &); 
  bool isEmpty() const; 
  void clear(); 
  void print() const; 
  void reversePrint() const; 
  int getLength() const;
  x getFirst() const; 
  x getLast() const; 
  //bool search(const x& item); 
  void insert(const x& item); 
  void deleteNode(const x& item); 
};
    
#endif 
