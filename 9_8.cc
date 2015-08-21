/* Given an infinite number of quarters (25 cents), dimes (10 cents), nickels (5
cents) and pennies (1 cent), write code to calculate the number of ways of representing
n cents. */

// Example program
#include <iostream>
#include <string>

using std::cout;
using std::endl;

void PrintN(int n, std::string str, bool useQ, bool useN, bool useD) {
  // base case
  if (n == 0)
    cout << str << endl;    
  
  if (n >= 25 && useQ) {
    PrintN(n-25, str + 'Q', useQ, useN, useD);
    useQ = false;
  }
  
  if (n >= 10 && useD) {
    PrintN(n-10, str + 'D', useQ, useN, useD);
    useD = false;
  }
  
  if (n >= 5 && useN) {
    PrintN(n-5, str + 'N', useQ, useN, useD);
    useN = false;
  }
}

int main()
{
  PrintN(100, "", true, true, true);
}
