/*Programmer: Ishaq Sloan 
 *Date: Feb. 2016 
 *Description: Rational Numbers and Arithmetic Simulator 
 *BMCC-CSC330 Data Structure Course 
 *Assignment: Project 1 */ 
#include "Rational.h"

//Operator Overload Function for "<<" (output) for Rational numbers
//displayed using the a/b format 
ostream& operator<<(ostream& osObject, const Rational& rationalNum)
{
  //if condition in case of any number over itself = 1
  //else if condition in case any number over 1 = itself
  //else continue with Rational number
  if (rationalNum.numerator == rationalNum.denominator)
    osObject << 1; 
  else if (rationalNum.denominator == 1)
    osObject << rationalNum.numerator;
  else
  {
    osObject << rationalNum.numerator; 
    osObject << "/"; 
    osObject << rationalNum.denominator;
  }

  return osObject; 
}

//Operator Overload Funciton for ">>"(input) for Rational numbers 
//input via keyboard using the a/b format for integers 
istream& operator>>(istream& isObject, Rational& rationalNum)
{
  char ch; 

  isObject >> rationalNum.numerator;
  isObject >> ch; 
  isObject >> rationalNum.denominator; 

}

//Constructor that passes referecnces to integers 
//and creates a Rational number object with them. 
Rational::Rational(int& numer, int& denom)
{ 
  int commonDivosor; 
  
  //catch exception for if denominator input is 0
  while (denom == 0)
  {
    try 
    {
      throw 0;
    }
    catch (...)
    {
      cout << "ERROR! Enter another Rational number please.\n" 
      << "Note: use valid integers. 0 can not be a denominator."; 
      cin >> denom; 
    }
  }

  //Note: checking if a number is Prime will help determine whether
  //or not the integers in both the numerator and denominator are 
  // worth trying to simplify any further.
  //
  //If these numbers are not prime, we will proceed to find the
  //greatest common factor/denominator of the 2 integers in the
  //Rational object. 
  //
  //When a gcd or gcf is found, the numerator and denominator of
  //the Rational object will be divided by the commonDivisor, which
  //is the gcd or gcf, and the process will repeat until Rational 
  //object is simplified.  


  //Prime number checker if numerator is greater than denominator
  if (numer > denom)
  { 
    while ((isPrime(numer) || isPrime(denom)) == false)
    {
      commonDivisor = gcd(numer, denom); 
      if (commonDivisor == 1)
        goto label;

      numer /= commonDivisor; 
      denom /= commonDivisor;
    }
    numerator = numer; 
    denominator = denom;
  }
  else
  {  
    while ((isPrime(numer) || isPrime(denom)) == false)
    {
      commonDivisor = gcd(denom, numer); 
      if (commonDivisor == 1)
        goto label;

      numer /= commonDivisor; 
      denom /= commonDivisor;
    }
    label:
      numerator = numer; 
      denominator = denom;
  }
}

//void constructor creates a Rational object with 1/2 as the value 
Rational::Rational(void)
{
  numerator = 1; 
  denominator = 2; 
}

//Operator overload function for the "+" operator 
Rational Rational::operator+(const Rational& rationalB)
{
  Rational _; 
  _.numerator = numerator * rationalB.denominator 
              + denominator * rationalB.numerator; 
  _.denominator = (denominator * rationalB.denominator);

  return _;
}

//Operator overload function for the "-" operator 
Rational Rational::operator-(const Rational& rationalB)
{
  Rational _; 
  _.numerator = (numerator * rationalB.denominator) 
              - (denominator * rationalB.numerator); 
  _.denominator = (denominator * rationalB.denominator);

  return _; 
}

//Operator overload function for the "*" operator 
Rational Rational::operator*(const Rational& rationalB)
{
  Rational _; 
  _.numerator = (numerator * _.numerator); 
  _.denominator = (denominator * _.denominator);
  
  return _;  
}

//Operator overload function for the "/" operator 
Rational Rational::operator/(const Rational& rationalB)
{
  Rational _; 
  _.numerator = (numerator * _.denominator); 
  _.denominator = (denominator * _.numerator);
  
  return _;    
}

//relational operators [convert fractions to decimal(function) and compare]
bool Rational::operator<(const Rational& _)
{
  return (decimal(numerator, denominator) < decimal(_.numerator, _.denominator)); 
}

bool Rational::operator<=(const Rational& _)
{
  return (decimal(numerator, denominator) <= decimal(_.numerator, _.denominator)); 
}

bool Rational::operator>(const Rational& _)
{
  return (decimal(numerator, denominator) > decimal(_.numerator, _.denominator)); 
}

bool Rational::operator>=(const Rational& _)
{
  return (decimal(numerator, denominator) >= decimal(_.numerator, _.denominator)); 
}

bool Rational::operator==(const Rational& _)
{
  return (decimal(numerator, denominator) == decimal(_.numerator, _.denominator)); 
}

bool Rational::operator!=(const Rational& _)
{
  return (decimal(numerator, denominator) != decimal(_.numerator, _.denominator)); 
}

//Function that checks if a number is prime
bool Rational::isPrime(int num)
{
  if (num % 2 == 0)
    return false; 

  for (int by3 = 3; by3 * by3 <= num; by3 += 2)
  {
    if (num % by3 == 0)
      return false; 
  }
  return true; 
}

//Function that finds the greatest common divisor 
//(gcd) of 2 integers 
int Rational::gcd(int a, int b)
{
  int remainder;
  int gcf; 

  remainder = a % b; 
  a = remainder; 
  if (a == 0)
    return b; 
  else 
    gcd(b, a); 
}

//Function that simplifies a Rational object by 
//checking if a number is Prime to help determine whether
//or not the integers in both the numerator and denominator are 
// worth trying to simplify any further.
//
//If these numbers are not prime, it will proceed to find the
//greatest common factor/denominator of the 2 integers in the
//Rational object. 
//
//When a gcd or gcf is found, the numerator and denominator of
//the Rational object will be divided by the commonDivisor, which
//is the gcd or gcf, and the process will repeat until Rational 
//object is simplified.  
void Rational::simplify(Rational& object)
{
  int commonDivisor; 
  
  //catch exception if denominator is 0
  while (object.denominator == 0)
  {
    try 
    {
      throw 0;
    }
    catch (...)
    {
      cout << "ERROR! Enter another Rational number please.\n" 
      << "Note: use valid integers. 0 can not be a denominator."; 
      cin >> object; 
    }
  }

   if (object.numerator > object.denominator)
  { 
    while ((isPrime(object.numerator) || isPrime(object.denominator)) == false)
    {
      commonDivisor = gcd(object.numerator, object.denominator); 
      if (commonDivisor == 1)
        goto label;

      object.numerator /= commonDivisor; 
      object.denominator /= commonDivisor;
    }
    //numerator = object.numerator; 
    //denominator = object.denominator;
  }
  else
  {  
    while ((isPrime(object.numerator) || isPrime(object.denominator)) == false)
    {
      commonDivisor = gcd(object.denominator, object.numerator); 
      if (commonDivisor == 1)
        goto label;

      object.numerator /= commonDivisor; 
      object.denominator /= commonDivisor;
    }
    label:
      object.numerator = object.numerator; 
      object.denominator = object.denominator;
  } 
}

//Function that will convert a Rational Object to deciaml
double Rational::decimal(int a, int b)
{
  return ((double)a)/((double)b); 
}
