//question number 6

#include <iostream>
#include <iomanip>

using namespace std; 

void  main()
{
  int a[7] = {3,1,5,3,2,6,7,90},
    temp, n, newnum;
    
    n = 7; 
    newnum = n % 2; 
    
    for (int j = 0; j <= newnum; j++)
     {
       temp = a[j]; 
       a[j] = a[n - j + 1]; 
       a[n -j + 1] = temp; 
       cout << setw(4) << a[j] << j << setw(4) < temp << endl; 
     }
     for (int j = 0; j <= n; j++)
       cout << setw(4) << a[j] << endl; 
}

