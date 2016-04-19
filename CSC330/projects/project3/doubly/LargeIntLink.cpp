#include "LargeIntLink.h"

LargeIntLink LargeIntLink::operator+(const LargeIntLink& numberB)
{
  cout << "OPERATOR+ initiated!" << endl; 

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

  cout << "length assigned" << endl; //DEBUG LINE 

  //create a link list of 0's to perform math with. 
  for (int i = 0; i < length; i++)
    temp.insert(0); 
  
  cout << "Empty link list created... "<< endl; //DEBUG LINE 

  p = last; 
  q = numberB.last;
  current = temp.last; 

  while ((p->bck != NULL) && (q->bck != NULL))
  {
    cout << "inside while" << endl; //DEBUG LINE 

    additionHolder = (p->info + q->info);
    if (additionHolder > 9)
    {
      cout << "Carry the 1!" << endl; //DEBUG LINE 
      additionHolder -= 10;            //subtract 10
      current->info += additionHolder; //set the number
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


LargeIntLink LargeIntLink::operator-(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  //insert code here  
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

LargeIntLink LargeIntLink::operator=(const LargeIntLink& numberB)
{
  LargeIntLink temp;
  //insert code here  
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
      return false;
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
      return false;
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

