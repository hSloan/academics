/*#include <iostream>
using namespace std;*/ 

bool isPrime(int num)
{
  if (num % 2 == 0)
    return false; 

  for (int by3 = 3; by3 * by3 <= num; by3 += 2)
  {
    if (num % by3 == 0)
      return false; 
  }
  return true; 
}

/*
int main()
{
  int number; 
  bool primetime; 

  cout << "Enter a number: "; 
  cin >> number; 
  
  primetime = isPrime(number); 
  
  if (primetime == true)
    cout << "\nThis number is prime!"; 
  else 
    cout << "This number is not prime!"; 
    
  return 0; 
}*/

