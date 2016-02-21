//Programmer:   Ishaq Sloan 
////Date:       January 22, 2016
////Purpose:    exercises.docx Question #1:
//              Write a function that will receive three parameters: 
//              a) a two-dimensional array of integers called x, that 
//              has three rows and four columns; b) an integer called n; 
//              c) an integer called k ;The function will find the sum 
//              of the nth row of the array x, and replace each element 
//              in the kth column by that sum. For example, if the 
//              function is sent an array containing the values below to 
//              the left ( with n = 2 and k = 3), when it returns to main, 
//              the array will contain the values below to the right. 
//              Note: the third column is replaced by 7’s, the sum of 
//              row 2.)
////       
////Input:      3 x 4 matrix of integers, number row to be summed
//              number column to print results       
////Output:     3 x 4 matrix of integers 

#include <iostream>
using namespace std; 

int x[3][4];  

void replace (int array[][4] , int n, int k)
{
  int sum = 0; 
  for (int i = 0; i < 4; i++)
    sum += x[n-1][i];

  for (int i = 0; i < k; i++)
    x[i][k-1] = sum;
}

int main()
{
  int sumRow; //hold the number of row to be summed 
  int answercolumn; //hold the number column sum should ve displayed 

  //user input matrix here 
  cout << "Please enter integers to fill the matrix grid: " << "\n";

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      cin >> x[i][j];

  //initialize sumRow
  cout << "\nWhat row would you like to sum up?" << "\n"; 
  cin >> sumRow; 
  //initialize answercolumn
  cout << "\nWhat column should the results be in?" << "\n";
  cin >> answercolumn; 

  //display matix before replace() function is applied
  cout << "\nBefore Call:";

  for (int i = 0; i < 3; i++)
  {
    cout << "\n";

    for (int j = 0; j < 4; j++)
      cout << x[i][j] << " ";
  }
  
  //call replace() function and display results    
  cout << "\n\nAfter Call:";
  replace(x, sumRow, answercolumn); 
  
  for (int i = 0; i < 3; i++)
  {
    cout << "\n"; 

    for (int j = 0; j < 4; j++)
      cout << x[i][j] << " ";
  }
  
  cout << endl; 
      
  return 0;  
}
