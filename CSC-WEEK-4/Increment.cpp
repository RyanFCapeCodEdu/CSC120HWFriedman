// This code is functional. In a comment below, explaine the differences between postincrementing and preincrementing
// Prefix increment and postfix increment operators.
#include <iostream>
using namespace std;

int main() {
   // demonstrate postfix increment operator
   unsigned int c{5}; // initializes c with the value 5
   cout << "c before postincrement: " << c << endl; // prints 5
   cout << "    postincrementing c: " << c++ << endl; // prints 5
   cout << " c after postincrement: " << c << endl; // prints 6                     

   cout << endl; // skip a line

   // demonstrate prefix increment operator
   c = 5; // assigns 5 to c  
   cout << " c before preincrement: " << c << endl; // prints 5
   cout << "     preincrementing c: " << ++c << endl; // prints 6
   cout << "  c after preincrement: " << c << endl; // prints 6                     
}

// Answer the question above here...
//
// The difference between preincrementing and post incrementing is the order of how things are done.
// Postincrementing involves allowing the code to execute first, only incrementing after completion. 
// Preincrementing increments first, then runs the code after. 
