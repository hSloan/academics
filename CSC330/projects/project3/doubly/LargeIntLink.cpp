#include "LargeIntLink.h"

LargeIntLink LargeIntLink::operator+(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  int additionHolder;
  const int carry = 1;
  Dnode<int> *p;
  Dnode<int> *q;
  Dnode<int> *current;   
  
  if (numberB.length > length)
    temp.length = numberB.length; 
  else
    temp.length = length;

  //create a link list of 0's to perform math with. 
  for (int i = 0; i < length; i++)
    temp.insert(0); 
  

  p = last;
  q = numberB.last;
  current = temp.last; 

  while ((p != NULL) && (q != NULL))
  {
    additionHolder = (p->info + q->info);
    if (additionHolder > 9)
    {
      additionHolder -= 10;            //subtract 10
      current->info += additionHolder; //set the number
      if (current->bck == NULL)
        temp.insertFront(carry); 
      else
        current->bck->info += carry;    //carry the one!
    }
    else 
    {
      current->info += additionHolder;
    }
    p = p->bck;
    q = q->bck;
    current = current->bck;
  }

  return temp; 
}


//Figure out how to make negative!--------------------------- 
LargeIntLink LargeIntLink::operator-(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  Dnode<int> *p;
  Dnode<int> *q;
  Dnode<int> *current; 
  
  if (numberB.length > length)
    temp.length = numberB.length; 
  else
    temp.length = length;

  //create a link list of 0's to perform math with. 
  for (int i = 0; i < length; i++)
    temp.insert(0); 

  p = last; 
  q = numberB.last; 
  current = temp.last; 
  
  while ((p!=NULL) && (q != NULL))
  {
    //borrow 1 from next place over
    if (p->info < q->info)
    {
      p->bck->info--; 
      p->info +=10; 
    }
    current->info += (p->info - q->info);
    
    p = p->bck;
    q = q->bck;
    current = current->bck;  
  }

  return temp; 
}

LargeIntLink LargeIntLink::operator*(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  //insert code here  
  return temp; 
}

LargeIntLink LargeIntLink::operator/(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  //insert code here  
  return temp; 
}

LargeIntLink LargeIntLink::operator%(const LargeIntLink& numberB)
{  
  LargeIntLink temp;
  //insert code here  
  return temp; 
}

//this function needs revising. DOES NOT PREVENT SELF ASSIGNMENT
LargeIntLink LargeIntLink::operator=(const LargeIntLink& numberB)
{
  LargeIntLink temp;

  temp.copy(numberB); 

  return temp; 
}

LargeIntLink LargeIntLink::copy(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  temp.copy(numberB);

  return temp; 
}

bool LargeIntLink::operator==(const LargeIntLink& numberB)
{
  Dnode<int> *p; //pointer for this link list 
  Dnode<int> *q; //pointer for LargeIntLink object "number B"

  p = first; 
  q = numberB.first;
  
  while ((p->nxt != NULL) && (q->nxt != NULL))
  {
    if (p->info != q->info)
    {
      return false;
    }
    else 
    {
      p = p->nxt; 
      q = q->nxt;
    }
  }

  return true; 
}

bool LargeIntLink::operator>=(const LargeIntLink& numberB)
{
  Dnode<int> *p; //pointer for this link list 
  Dnode<int> *q; //pointer for LargeIntLink object "number B"

  p = first; 
  q = numberB.first;
  
  while ((p->nxt != NULL) && (q->nxt != NULL))
  {
    if (p->info < q->info)
    {
      return false;
    }
    else 
    {
      p = p->nxt; 
      q = q->nxt;
    }
  }

  return true;
}
bool LargeIntLink::operator<=(const LargeIntLink& numberB)
{
  Dnode<int> *p; //pointer for this link list 
  Dnode<int> *q; //pointer for LargeIntLink object "number B"

  p = first; 
  q = numberB.first;
  
  while ((p->nxt != NULL) && (q->nxt != NULL))
  {
    if (p->info > q->info)
      return false;
    else 
    {
      p = p->nxt; 
      q = q->nxt;
    }
  }

  return true;

}
bool LargeIntLink::operator<(const LargeIntLink& numberB)
{
  Dnode<int> *p; //pointer for this link list 
  Dnode<int> *q; //pointer for LargeIntLink object "number B"

  p = first; 
  q = numberB.first;
  
  while ((p->nxt != NULL) && (q->nxt != NULL))
  {
    if (p->info >= q->info)
      return false;
    else 
    {
      p = p->nxt; 
      q = q->nxt;
    }
  }

  return true;

}

bool LargeIntLink::operator>(const LargeIntLink& numberB)
{
  Dnode<int> *p; //pointer for this link list 
  Dnode<int> *q; //pointer for LargeIntLink object "number B"

  p = first; 
  q = numberB.first;
  
  while ((p->nxt != NULL) && (q->nxt != NULL))
  {
    if (p->info <= q->info)
      return false;
    else 
    {
      p = p->nxt; 
      q = q->nxt;
    }
  }

  return true;

}

//int main(){return 0;}

