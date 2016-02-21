#include "Rectangle.h"

#include <iostream>
using namespace std; 

void main()
{
  Rectangle r(4,5); 

  cout << "\nThe area of the rectangle 4 x 5 is" << r.getArea(); 

  cout << "\nThe perimeter of the rectangle 4 x 5" << r.getPerimeter(); 
}

