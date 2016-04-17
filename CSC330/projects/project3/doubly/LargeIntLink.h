#ifndef LargeIntLink_H
#define LargeIntLink_H
#include <iostream>
#include <string>
#include "doubly.h"
#include "doubly.cpp" 
using namespace std; 

//LargeIntLink class inherits doubly class 
class LargeIntLink : public doubly<int>
{
  friend ostream& operator<<(ostream& osObject, const LargeIntLink& bigNum)
  {
    Dnode<int> *temp;     //temp walker node 
    temp = bigNum.first;  //set it to first
    
    //this for loop should print all elements in link list according to the link lists length
    //length is defined in doubly class. 
    for (int i = 0; i < bigNum.length; i++)
    {
      osObject << temp->info;
      temp = temp->nxt; 
    }

    return osObject;
  }

  //istream will take string and assign one char at a time to link list info. 
  //length() comes from the <string> package
  friend istream& operator>>(istream& isObject, LargeIntLink& bigNum)
  {
    string str; 
    char ch;
    int count =0; 
    
    isObject >> str; 
    
    for (int i = str.length()-1; i > -1; i--)
    {
      ch = str[i];
      bigNum.insert((int(ch)-48)); //use insert from inherited class combined with char-convert alg
    }

    return isObject;
  }
 
  protected:
  int const maxDigits = 100; 
  int digitLength;
  
  public:
  LargeIntLink(); //void constructor
  
  LargeIntLink operator+(const LargeIntLink& numberB); 
  LargeIntLink operator-(const LargeIntLink& numberB); 
  LargeIntLink operator*(const LargeIntLink& numberB); 
  LargeIntLink operator/(const LargeIntLink& numberB); 
  LargeIntLink operator%(const LargeIntLink& numberB); 
  LargeIntLink operator=(const LargeIntLink& numberB); 

  bool operator==(const LargeIntLink& numberB);
  bool operator<(const LargeIntLink& numberB);
  bool operator>(const LargeIntLink& numberB);
  bool operator<=(const LargeIntLink& numberB);
  bool operator>=(const LargeIntLink& numberB);
};

#endif
