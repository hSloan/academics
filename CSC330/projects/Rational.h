/*Programmer: Ishaq Sloan 
 *Date: Feb. 2016 
 *Description: Rational Numbers and Arithmetic Simulator 
 *BMCC-CSC330 Data Structure Course
 *Assignment: Project 1 */

#ifndef Rational_H
#define Rational_H
#include <iostream>
using namespace std; 

class Rational
{
  friend ostream& operator<<(ostream&, const Rational&); 
  friend istream& operator>>(istream&, Rational&); 

  private: 
  int numerator; 
  int denominator; 
  int commonDivisor;

  public: 
  Rational(int& numer, int& denom); 
  Rational(); 

  Rational operator+(const Rational& rationalB); 
  Rational operator-(const Rational& rationalB); 
  Rational operator*(const Rational& rationalB); 
  Rational operator/(const Rational& rationalB); 

  bool operator<(const Rational& rationalB); 
  bool operator<=(const Rational& rationalB); 
  bool operator>(const Rational& rationalB); 
  bool operator>=(const Rational& rationalB); 
  bool operator==(const Rational& rationalB); 
  bool operator!=(const Rational& rationalB);
  
  //Discrete Math Methods
  bool isPrime(int num); //Prime number checker  
  int gcd(int a, int b); //Greatest Common Divisor 
  double decimal(int a, int b); //Convert Rational to Decimal 
  void simplify(Rational& object); //simplify Rational Numbers

}; 

#endif
