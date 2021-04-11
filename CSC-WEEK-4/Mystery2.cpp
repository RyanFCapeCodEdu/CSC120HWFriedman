// Exercise 4.21: Mystery2.cpp
#include <iostream>
using namespace std;

int main() {
   int count{1};
   unsigned int number{1};
   while (count <= 10) {
      cout << (count % 2 == 1 ? "****" : "++++++++") << endl;
      if (count % 2 ==1){number = count * number;} else {number = count + number;}
      cout << number; 
      ++count;
      // I'm not sure if I figured this one out. 
   }
}