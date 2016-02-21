#include <iostream>
using namespace std; 

double decimal(int a, int b)
{
  return ((double)a)/((double) b); 
}

int main() 
{
  int num1 = 1; 
  int num2 = 4; 

  double num3 = decimal(num1, num2); 

  cout << num3 << endl;
  
  return 0;  
}

