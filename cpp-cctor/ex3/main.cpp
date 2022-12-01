/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c; // default constructor c
  Cube myCube = c; // copy constructor of c

  return 0;
}
