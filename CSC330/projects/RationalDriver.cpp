/*Programmer: Ishaq Sloan 
*Date: Feb. 2016 
*Description: Rational Numbers and Arithmetic Simulator 
*BMCC-CSC330 Data Structure Course 
*Assignment: Project 1 */

#include "Rational.cpp"

using namespace std; 

int main()
{
  Rational fractionA; 
  Rational fractionB;
  Rational fractionC; 
  int userChoice = 1;  
  
  //Prompt user to input data to initialize Rational object 
  cout << "Please enter a Rational Number like so,  a/b : "; 
  cin >> fractionA; 
  fractionA.simplify(fractionA); //simplify Rational input  
  
  //Prompt user to initialize another Rational object 
  cout << "Enter another Rational Number like so, a/b : "; 
  cin >> fractionB;
  fractionB.simplify(fractionB); //simplify Rational input
  
  //Display simplified input 
  cout << "Your 1st fraction simplified to: " 
  << fractionA << endl; 
  cout << "Your 2nd fraction simplified to: "
  << fractionB << endl;
  
  //Prompt user choice menu
  while (userChoice != 0)
  {
  cout << "What operation would you like to perform, "
  << "with these Rational numbers?\n"; 
  cout << "1. +\n2. -\n3. *\n4. /\n5. >\n"
  << "6. <\n7. >=\n8. <=\n9. =\n10. ~=\nor 0 to exit."
  << "\n\nEnter your choice number: " << endl; 
  cin >> userChoice;

    switch(userChoice)
    {
      case 0: //Exit 
        cout << "GoodBye..." << endl; 
        break;
      case 1: //Addition
        cout << fractionA << " + " << fractionB << " = " << fractionA + fractionB << endl;
        break; 
      case 2: //Subtraction 
        cout << fractionA << " - " << fractionB << " = " << fractionA - fractionB << endl;
        break; 
      case 3: //Multiplication
        cout << fractionA << " * " << fractionB << " = " << fractionA * fractionB << endl;
        break;  
      case 4: //Division
        cout << fractionA << " / " << fractionB << " = " << fractionA / fractionB << endl;
        break; 
      case 5: //Greater Than
        cout << fractionA << " > " << fractionB << " = ";
          if ((fractionA > fractionB) == 1)
            cout << "True" << endl; 
          else 
            cout << "False" << endl; 
        break;
      case 6: //Less Than 
        cout << fractionA << " < " << fractionB << " = ";
        if((fractionA < fractionB) == 1)
          cout << "True" << endl; 
        else 
          cout << "False" << endl; 
        break;  
      case 7: //Greater than or equal to
        cout << fractionA << " >= " << fractionB << " = "; 
        if ((fractionA >= fractionB) == 1)
          cout << "True" << endl;
        else 
          cout << "False" << endl;  
        break;  
      case 8: //Greater than or equal to 
        cout << fractionA << " <= " << fractionB << " = ";
        if ((fractionA <= fractionB) == 1)
          cout << "True" << endl;
        else 
          cout << "False" << endl;  
        break;  
      case 9: //Equal to 
        cout << fractionA << " == " << fractionB << " = "; 
        if ((fractionA == fractionB) == 1) 
          cout << "True" << endl;
        else 
          cout << "False" << endl;  
        break;  
      case 10: //Not Equal 
        cout << fractionA << " != " << fractionB << " = "; 
        if ((fractionA != fractionB) == 1)
          cout << "True" << endl;
        else 
          cout << "False" << endl;  
        break;  
      default: 
        cout << "Invalid entry, try again... "; 
    }
  }

  return 0; 
}
