#include "doubly.cpp"

int main()
{
  doubly<int> numbers;
  int input;  
  
  cout << "Enter a number: "; 
  cin >> input;
  numbers.insert(input); 
  
  cout << "\nEnter another number: "; 
  cin >> input; 
  numbers.insert(input);
 
  cout << "Your entered: \n";  
  numbers.print();
  cout << "\n\nThe length of the list is " << numbers.getLength() << endl; 
  cout << "The first number is " << numbers.getFirst() << endl; 
  cout << "The last number is " << numbers.getLast() << endl; 
  cout << "Flip it! "; 
  numbers.reversePrint(); 
  cout << "clearing list..." << endl; 
  //numbers.clear(); 
  return 0; 
}

