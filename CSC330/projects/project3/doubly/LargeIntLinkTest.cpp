#include "LargeIntLink.cpp"

int main()
{
  LargeIntLink A; 
  LargeIntLink B;
  LargeIntLink C;  

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
  
  // C = A + B; 
  //cout << A; //test error must be with ostream   

  return 0;   
}

