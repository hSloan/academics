//Programmer:   Ishaq Sloan 
//////Date:       January 28, 2016
//////Purpose:    Assume you have the following declaration (in main) :   
//                int  num[13] [7];
//                Assume that this array is filled completely. 
//                Write functions to perform each of the following:
//////Input:      see comments below.                      
//////Output:     see comments below. 

#include <iostream>

using namespace std;  

/*A) a function that prints all elements in the array that are 
 * greater than 80 or less than 10 */

void chosen(int array[][7])
{
  cout << "The following are less than 10 or greater than 80:\n";

  for (int i = 0; i < 13; i++)
  {
    cout << "\n";

    for (int j = 0; j < 7; j++)
    {
      if ((array[i][j] > 80) || (array[i][j] < 10))
        cout << array[i][j] << " "; 
    }
  }

  cout << "\n"; 
}

/*B) a function that finds the largest number in the array and
 * returns it's subscript. */

void maxSubscript(int array[][7])
{
  int most = 0; 
  int imost, jmost; //holds subscript numbers of greatest int

  for (int i = 0; i < 13; i++)
    for (int j = 0; j < 7; j++)
    {
      if (array[i][j] > most)
      {
        most = array[i][j];
        imost = i;
        jmost = j; 
      }
    }

  cout << "The greatest integer is "
  << most << " subscript num["<<imost
  <<"]["<<jmost<<"]\n"; 
} 

void maxSubscript`(int array[][7], int&sub1, int&sub2)
{
  int most = 0; 
  
 for (int i = 0; i < 13; i++)
    for (int j = 0; j < 7; j++)
    {
      if (array[i][j] > most)
      {
        most = array[i][j];
        sub1 = i; 
        sub2 = j; 
      }
    }
    //print info here
}

    

/*C) a function that finds and returns the average of all 
 * the numbers in the array */

int average (int array[][7])
{
  int sum = 0;
  int count = 0; 
  int average; 

  for (int i = 0; i < 13; i++)
    for (int j = 0; j < 7; j++)
    {
      sum += array[i][j]; 
      count++; 
    }

  average = sum / count; 

  return average; 
}

/*C) a function that prints the entire array in a neat table,
 * but starting with the 13th row and proceeding in reverse
 * order to the first. */

void reverse(int array[][7])
{
  cout << "The reverse order of the array is:\n";

  for (int i = 13; i >= 0; i--)
  {
    cout << "\n";
    for (int j = 7; j >= 0; j--)
     {
       cout << array[i][j] << " ";
     }
  }

  cout << "\n"; 
}

//main method 

int main()
{
  int num[13][7];
  
  cout << "Fill the matrix: " << "\n"; 
  for (int i = 0; i < 13; i++)
    for (int j = 0; j < 7; j++)
      cin >> num[i][j]; 

  chosen(num);
  
  maxSubscript(num);  

  cout << "The average is " << average(num) << endl; 

  reverse(num); 
  
  return 0; 
}

