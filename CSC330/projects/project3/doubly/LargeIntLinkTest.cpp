#include "LargeIntLink.cpp"

int main()
{
  LargeIntLink A; 
  LargeIntLink B;
  //LargeIntLink C; //arithmetic test object 

  cout << "Enter a huge number for A: "; 
  cin >> A; 
  cout << "\n Enter a huge number for B: "; 
  cin >> B;
  
  if (A == B)
    cout << "these numbers are equal!" << endl; 
  else 
    cout << "these numbers are not equal" << endl; 

  if (A >= B)
    cout << "A is greater than or equal to B" << endl; 
  else 
    cout << "A is not greater than or equal to B" << endl; 
  
  cout << "first number is: " << A << endl; // test print
  cout << "second number is: " << B << endl; //test print
  
  //C.copy(A); //SEE COPY CONSTRUCTOR FOR NEXT DEBUG STEPS
 // cout << C; 

  cout << "the sum of the numbers are " << A + B << endl; 
  
  //cout << "your sum is " << C << endl; //arithmetic test print   
  return 0;   
}

