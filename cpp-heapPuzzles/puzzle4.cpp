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
  int *x; // pointer to nothing
  int size = 3; // size stored in stack
  x = new int[size]; // x = new integer size 3; // 

  for (int i = 0; i < size; i++) {
    x[i] = i + 3;
  }

  delete[] x;
}
