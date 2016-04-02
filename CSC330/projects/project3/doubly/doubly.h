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
  friend ostream& operator<<<x>(ostream&, const doubly<x>& nodez); 
  friend istream& operator>><x>(istream&, const doubly<x>& nodez); 

  protected: 
  int length; 
  Dnode<x> *first; 
  Dnode<x> *last; 
  
  public:
  doubly(); //default constructor
  doubly(const doubly<x>& other); //copy constructor 
  ~doubly(); //destructors  
  const doubly<x>& operator=(const doubly<x> &); 
  void initialize(); 
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
     
