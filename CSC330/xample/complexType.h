#ifndef H_complexNumber
#define H_complexNumber 

#include <iostream> 
using namespace std; 

class complexType
{
  friend ostream& operator<<(ostream&, const complexType&); 
  friend istream& operator>>(istream&, complexType&); 

  public: 
  void setComplex(const double& real, const double& imag); 
  void getComplex(double& real, double& imag) const; 

  complexType(double real =0, double imag = 0); //constructor 

  complexType operator+(const complexType& otherComplex) const;
  complexType operator*(const complexType& otherComplex) const; 
  bool operator==(const complexType &otherComplex) const; 

  private: 
  double realPart; 
  double imaginaryPart; 
}; 

#endif
