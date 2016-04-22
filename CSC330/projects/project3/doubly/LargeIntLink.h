#ifndef LargeIntLink_H
#define LargeIntLink_H
#include <iostream>
#include <string>
#include "doubly.cpp" 
using namespace std; 

//LargeIntLink class inherits doubly class 
class LargeIntLink : protected doubly<int>
{
  friend ostream& operator<<(ostream& osObject, const LargeIntLink& bigNum)
  {
    Dnode<int> *temp;     //temp walker node 
    temp = bigNum.first;  //set it to first

    //this for loop should print all elements in link list according to the link lists length
    //length is defined in doubly class. 
    while (temp != NULL)
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
    Dnode<int> *checker; 
    isObject >> str; 
    
    for (int i = 0; i < str.length(); i++)
    {
      ch = str[i];
      bigNum.insert(int(ch)-48); //use insert from inherited class combined with char-convert alg
    }
    
    return isObject;
  }
 
  protected:
  int const maxDigits = 100; 
  
  public:
  LargeIntLink():doubly<int>(){}; //void constructor
  
  LargeIntLink operator+(const LargeIntLink& numberB); 
  LargeIntLink operator-(const LargeIntLink& numberB); 
  LargeIntLink operator*(const LargeIntLink& numberB); 
  LargeIntLink operator/(const LargeIntLink& numberB); 
  LargeIntLink operator%(const LargeIntLink& numberB); 
  LargeIntLink operator=(const LargeIntLink& numberB); 
  LargeIntLink copy(const LargeIntLink& numberB); 

  bool operator==(const LargeIntLink& numberB);
  bool operator<(const LargeIntLink& numberB);
  bool operator>(const LargeIntLink& numberB);
  bool operator<=(const LargeIntLink& numberB);
  bool operator>=(const LargeIntLink& numberB);
};

#endif
