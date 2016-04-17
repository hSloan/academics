#include "doubly.h"

/*Progress Report- Change edit the insert and delete function to 
 * be an unsorted version. 
 * Refer to the Project 3 sheet for checklist details... */ 

//constructor 
template <class x>
doubly<x>::doubly()
{
  cout << "empty doubly list created..." << endl; //DEBUG LINE  
  first = NULL; 
  last = NULL;
  length = 0;
}

template <class x>
doubly<x>::doubly(const doubly<x>& other)
{
  Dnode<x> *newNode; 
  Dnode<x> *otherPoint; 
  
  if (first != NULL) //if list is not empty, clear it
    clear(); 
    
  if (other.first == NULL) //if other list is empty 
   {
     first = NULL; 
     last = NULL; 
     length = 0; 
   }
   else 
   {
     otherPoint = other.first; //set other pointer 
     length = other.length; // set length

     first = new Dnode<x>; //create new node
     first->info = otherPoint->info; //copy info 
     first->bck = NULL; 
     first->nxt = NULL; 
     last = first;  
     otherPoint = otherPoint->nxt; //set pointer to next node(maybe)  

     while (otherPoint != NULL)
     {
       newNode = new Dnode<x>; //create new node
       newNode->info = otherPoint->info; //copy info 
       newNode->nxt = NULL; //set new node next null 
       last->nxt = newNode;//point last next to newnode 
       newNode->bck = last; //pont new node back to last node 
       last = newNode; //make newnode the last 
       otherPoint = otherPoint->nxt; //point to next node(maybe)
     }
   }
}

template <class x>
doubly<x>::~doubly()
{
  cout << "destructor activated!" << endl; //DEBUG LINE   
    Dnode<x> *temp;
    temp = first;
    first = first->nxt;
    first->bck = NULL;
    delete temp;
    delete first;
    cout << "node deleted...";  

  last = NULL;
  length = 0;
  
  cout << "destructor completed!\n";  
}

template <class x>
bool doubly<x>::isEmpty() const
{
  return (first == NULL); 
}

//THIS NEEDS REVISING. RESET LINK LIST TO EMPTY
template <class x>
void doubly<x>::clear()
{
  Dnode<x> *temp; //destructo pointer

  if (isEmpty() == 0)
  {
    temp = first;
    first = first->nxt;
    first->bck = NULL;
    delete temp;
  }

  last = NULL; 
  length = 0; 
}

template <class x>
int doubly<x>::getLength() const
{
  return length;
}

template <class x>
void doubly<x>::print() const
{
  Dnode<x> *current; //traverse pointer 

  current = first;

  while (current != NULL)
  {
    cout << current->info << " "; 
    current = current->nxt;
  }
}

template <class x>
void doubly<x>::reversePrint() const
{
  Dnode<x> *current; 

  current = last; 

  while (current != NULL)
  {
    cout << current->info << " "; 
    current = current->bck; 
  }
}

/*template <class x>
bool doubly<x>::search(const x& item) const//delete this const and see what happens
{
  bool found = false; 
  Dnode<x> *current; 

  current = first;

  while (current != NULL && !found)
    if (current->info >= item)
      found = true; 
    else 
      current = current->nxt; 

    if (found)
      found = (current->info == item); 

    return; 
}*/


template <class x>
x doubly<x>::getFirst() const 
{
  if (first != NULL) 
  {
    return first->info;
  }
}

template <class x>
x doubly<x>::getLast() const
{
  if (last != NULL)
  {
    return last->info;
  }
}

template <class x>
void doubly<x>::insert(const x& item)
{
  Dnode<x> *current; //traverse pointer
  Dnode<x> *shadow; //pointer before current
  Dnode<x> *newNode; //node creator 
  bool found; 

  newNode = new Dnode<x>;
  newNode->nxt = NULL; 
  newNode->bck = NULL;  
  newNode->info = item; 

  if (first == NULL) //if there is an empty list 
  {
    first = newNode; 
    last = newNode;
    length++; 
    cout << "first node added!\n"; //DEBUG LINE
  }
  else
  {
    current = first;

    while (current != NULL && !found)//while not empty 
    {
      shadow = current; 
      current = current->nxt; 
      shadow->nxt = newNode; 
      newNode->bck = shadow;
      last = newNode;
    }
    length++;
    cout << "length incremented!\n"; //DEBUG LINE  
    }
  }

//revise this function to not operate on a PRE SORTED list
template <class x>
void doubly<x>::deleteNode(const x& item)
{
  Dnode<x> *current; //traverse pointer 
  Dnode<x> *shadow; 
  bool found; 

  if (first == NULL)
    cout << "Cannot delete from an empty list." << endl; 
  else if (first->info == item) //delete first node
  {
    current = first; 
    first = first->nxt; 

    if (first != NULL)
      first->bck = NULL; 
    else 
      last = NULL; 

      length--; 

      delete current; 
  }
  else 
  {
    found = false;
    current = first;

    while (current != NULL && !found)
      if (current->info >= item)
        found = true;
      else 
        current = current->nxt; 

    if (current == NULL)
      cout << "The item you want deleted does not exist." << endl;
    else if (current->info == item) //equality checkpoint
    {
      shadow = current->bck; 
      shadow->nxt = current->nxt; 

      if (current->nxt != NULL)
        current->nxt->bck = shadow; 

      if (current == last)
        last = shadow;

      length--; 
      delete current;
    }
    else 
      cout << "The item to be deleted is not in list." << endl;
  }
}

//int main(){ return 0;}
