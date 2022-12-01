/**
 * C++ program copying a Cube class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

Cube foo() {
  Cube c; // calls default constructor on stack
  return c; // returns/copies cube c back to main() as copy constructor
}

int main() {
  Cube c2 = foo(); // c2 takes on copy constructor of copy constructor to put it into c2
  return 0;
}
