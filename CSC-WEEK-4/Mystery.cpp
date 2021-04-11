// Exercise 4.12: Mystery.cpp Adds squares from 1-10
#include <iostream>
using namespace std;

int main() {
   int x{1};
   int y{0};
   int total{0};

   while (x <= 10) {
      y = x * x;
      total = y + total;
x++;
cout << y << "\n";

   } 

   cout << "Total is " << total << endl;
} 