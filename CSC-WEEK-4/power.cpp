// Raise x to the y power. 
#include <iostream>
using namespace std;

int main() {
   unsigned int i{1}; // initialize i to begin counting from 1
   unsigned int power{1}; // initialize power

   cout << "Enter base as an integer: ";  // prompt for base
   unsigned int x; // base 
   cin >> x; // input base

   cout << "Enter exponent as an integer: "; // prompt for exponent
   unsigned int y; // exponent
   cin >> y; // input exponent

   unsigned int answer{1};

   // count from 1 to y and multiply power by x each time
   answer = x;
   while (i < y) {
      answer = answer * x;
      ++i;
   } // end while

   cout << answer << endl; // display result
} // end main