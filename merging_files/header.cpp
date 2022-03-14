#include "header_example.h"  // using "" instead of <> because the file exists in the same directory
#include <iostream>
using std::cout;

void OuterFunction(int i) { InnerFunction(i); } // notice the order is wrong. however, since the function has been declared previously, order no longer matters

void InnerFunction(int i) {
  cout << "The value of the integer is: " << i << "\n";
}



int main() {
  int a = 5;
  OuterFunction(a);
}