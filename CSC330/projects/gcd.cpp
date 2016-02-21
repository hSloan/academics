#include <iostream>
using namespace std; 

int gcd(int a, int b) 
{
  int remainder;
  int gcf;   
  
  remainder = a % b; 
  a = remainder;
  if (a == 0) 
     return b; 
  else
    gcd(b, a); 
}

int main()
{
  int num1 = 225; 
  int num2 = 64;
  
  cout << "First number is " << num1 << "\n"; 
  cout << "Second number is " << num2 << endl;
  
  cout << gcd(num2, num1) << endl;
  
  cout << "First number is " << num1 << "\n"; 
  cout << "Second number is " << num2 << "\n";

return 0; 
} 
