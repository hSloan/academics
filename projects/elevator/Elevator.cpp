//Elevator simulator 

#include <iostream>
using namespace std; 

class Elevator
{
  const int FLOOR_COUNT = 6; 
  int self; 
  int floor; 
  int selection; 

  void goingUp(int position, int destination); 
  void goingDown(int position, int destination); 
};
