//Programmer:   Ishaq Sloan 
//Date:       January 28, 2016
//Purpose:    Write a function called fixit that receives 
//            two parameters: an array of 10 integers, and 
//            an integer n. Fixit will add 5 to all elements
//            whose subscript is less than n; and it wil add 
//            10 to all others.  
//Input:      integer array of 10 elements and an integer.                       
//Output:     

// question number 3 on excercise sheet 

#include <iostream>

using namespace std; 

void fixit(int array[10], int n)
{
  for (int i = 0; i < 10; i++)
  {
    if (i < n)
      array[i] += 5; 
    else 
      array[i] += 10;
  }
}

int main()
{
  int num[10] = { 3, 4, 5, 6, 7, 
                  8, 9, 10, 1, 2};

  for (int i = 0; i < 10; i++)
    cout << num[i] << " "; 

    cout << "\nCalling fixit function!\n"; 
    fixit(num, 4); 

    cout << "Now the values are:\n"; 
  
  for (int i = 0; i < 10; i++)
    cout << num[i] << " "; 

  return 0; 
}
