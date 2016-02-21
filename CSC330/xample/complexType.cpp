#include "complexType.h"

//definition for overloading << 
ostream& operator<<(ostream &osObject, const complexType &complexI)
{
  osObject << "("; 
  osObject << complexI.realPart; 
  osObject << ", "; 
  osObject << complexI.imaginaryPart; 
  osObject << ")"; 

  return osObject; 
}

//definition for overloading >> 
istream& operator>>(istream &isObject, complexType &complexI)
{
  char ch; 

  isObject >> ch; 
  isObject >> complexI.realPart; 
  isObject >> ch; 
  isObject >> complexI.imaginaryPart; 
  isObject >> ch; 

  return isObject; 
}

//definition for overloading == 
bool complexType::operator==(const complexType &otherComplex) const
{
  return (realPart == otherComplex.realPart && imaginaryPart == otherComplex.imaginaryPart); 
}

//definition of constructor 
complexType::complexType(double real, double imag)
{
  realPart = real; 
  imaginaryPart = imag; 
}

//set function
void complexType::setComplex(const double &real, const double &imag)
{
  realPart = real; 
  imaginaryPart = imag; 
}

//get function 
void complexType::getComplex(double &real, double &imag) const
{
  real = realPart; 
  imag = imaginaryPart; 
}

complexType complexType::operator+(const complexType &otherComplex) const
{
  complexType temp;

  temp.realPart = realPart + otherComplex.realPart;
  temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart; 
  
  return temp; 
}

complexType complexType::operator*(const complexType &otherComplex) const
{
  complexType temp; 
  temp.realPart = (realPart * otherComplex.realPart) - (imaginaryPart * otherComplex.imaginaryPart);
  temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart); 
  return temp; 
}
