/*
* Program      : Sum of First 50 Natural Numbers
* Name         : Alishbah Urooj
* Reg No.      :  L1S26BSCS0150
*Assignment    : 01 - Getting Started with GitHub
*/



#include <iostream>
using namespace std;

int main () {
  int number =50;
  int sum =0;

// Method 1: add numbers one by one using a loop
for (int i=0; i <=number; i++){
      sum = sum + i;
}
cout << "sum of first" << number << "natural numbers is" << sum << endl;

// Method 2: verify using the formula n(n+1)/2
int sumformula = number(number+1)/2;
cout << "sum using formula n (n+1) /2 " << sumformula << endl;

return 0;
}

  
