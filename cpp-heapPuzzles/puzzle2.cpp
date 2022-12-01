/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x = new int;
  int *p;
  // *x = random int
  // x = heap location of random int
  int &y = *x;
  // amp y is a reference var
  // &y alias another piece of memory to name a place of memory
  y = 4;

  cout << "p = " << p << endl; // stack location of memory
  cout << "*p = " << *p << endl; // stack location of memory

  cout << "&x = " << &x << endl; // stack location of memory
  cout << "x = " << x << endl; // heap location
  cout << "*x = " << *x << endl; // actul value of pointed heap location so 4

  cout << "&y = " << &y << endl; // heap location of int
  cout << "y = " << y << endl; // value of y
  // cout << *y << endl;

  return 0;
}
