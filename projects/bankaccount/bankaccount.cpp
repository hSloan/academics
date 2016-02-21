//Bank Account class attempted conversion from java to c++ 

/*#include is the directives for the preprocessor.
 * I find it similar to saying 'import' in java. */

#include <iostream> //includes basic input output stream 
#include <string>   //allows input to be strings of char
#include <sstream>  //allows us to convert string to data types like 'parse'
using namespace std; //allows me to call print methods in an unqualified manner

class BankAccount
{
  BankAccount(double startBal):balance(startBal){} //constructor 

  private:      //private field 
  double balance; 

  public:       //public field 
  void setBalance(double bal)
  {
    balance = bal; 
  }
  void setBalance(string str)
  {
    stringstream(str) >> balance;
  }
  void deposit(double amount)
  {
    balance += amount;
  }
  void deposit(string str)
  {
    double amt; 
    stringstream(str) >> amt; 
    balance += amt; 
  }
  void withdraw(double amount)
  {
    balance -= amount;
  }
  void withdraw(string str)
  {
    double amt; 
    stringstream(str) >> amt; 
    balance -= amt; 
  } 
};

int main() {} //empty main method 
