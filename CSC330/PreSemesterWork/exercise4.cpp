//Programmer:   Ishaq Sloan 
//Date:       January 28, 2016
///Purpose:   Write a function that receives three parameters:
//            a) a 5 by 6 two-dimensional array of integers called 
//            arr. 
//            b)an integer n. 
//            c) a 6 element array of integers called arr2  
//Input:                            
//Output:     

//question number 4 on the exercise work sheet 

#include <iostream>

using namespace std; 

void replaceRow(int arr[][6], int n, int arr2[])
{
  for (int i = 0; i < 6; i++)
    arr[n][i] = arr2[i];
}

int main()
{
  int num[5][6];
  int num2[5];
  int row;   

  cout << "Enter numbers for 5 x 6 matrix:\n"; 
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 6; j++)
      cin >> num[i][j];
      
  cout << "Enter the row number you would like to modify:\n"; 
  cin >> row; 
  
  cout << "Enter 6 numbers to replace this row:\n"; 
  for (int i = 0; i < 6; i++)
    cin >> num2[i]; 
    
  cout << "\nReplacing row...\n"; 
  replaceRow(num, row, num2); 
  cout << "Done. Results: \n"; 
  
  for (int i = 0; i < 5; i++)
  {
    cout << "\n"; 
    for (int j = 0; j < 6; j++)
      cout << num[i][j] << " ";
  }
}


