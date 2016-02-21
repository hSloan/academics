//Programmer: Ishaq Sloan 
//Date:       January 22, 2016
//Purpose:    Calculate and print the highest, lowest and sum of a set of 
//            integers. 
//Input:      The set of integers - max 100 
//Output:     The set of integers, the highest inteer, the lowest integer, 
//            and the sum of the integers

#include <iostream>       //"#include" directives for processor, standard IO-ops
using namespace std;      //using declaration for unqualified access of std elements

//void function whose parameters is an integer array and a integer point? 
void read_numbers(int n[], int &l); //function declaration

//void function whose parameters is an int array, and 3 int variables
void find_high_low(int n[], int l, int &hi, int &lo); //function declaration 

//void function that prints all information. 
void print_info(int n[], int l, int h, int lo, int s); //integer //why integer at the end?

//function that returns the sum of all the array elements in integers. 
int find_sum(int n[], int l);  //function declaration

int main()
{
  int numbers[100],
      length = 0,
      high, 
      low, 
      sum;  

read_numbers(numbers, length);

find_high_low(numbers, length, high, low); 

sum = find_sum(numbers, length); 

print_info(numbers, length, high, low, sum); 

return 0; 
}

//define and initialize read_numbers. 
void read_numbers(int n[], int &l)
{
  int size; 

  cout << "Enter the number of integers - 100 maximum - you will input: "; 
  cin >> size; 

  while (size > 100)
  {
    cout << "ERROR: the maximum is 100 == Re enter the number of integers: ";
    cin >> size; 
  }

  cout << "\nEnter the integers, separated by a space \n"; 

  for (int i = 0; i < size; i++)
    cin >> n[i++]; 
}

void find_high_low (int n[], int l, int &hi, int &lo)
{
  hi = n[0]; 
  lo = n[0]; 

  for (int i = 1; i < l; i++)
  {
    if (n[i] > hi)
      hi = n[i]; 

    if (n[i] < lo)
      lo = n[i]; 
  }
}

void print_info (int n[], int l, int h, int lo, int s)
{
  cout << "The numbers are: "; 

  for (int i = 0; i < l; i++)
    cout << n[i] << " "; 

    cout << "\nThe highest number is: " << h
         << "\nThe lowest number is: " << lo
         << "\nThe sum of the numbers is: " << s << "\n"; 
}

int find_sum (int n[], int l)
{
  int sum = 0; 

  for (int i = 0; i < l; i++)
    sum += n[i]; 

  return sum; 
}
