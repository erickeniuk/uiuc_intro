/**
 * C++ program invoking Cube's assignment operator.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

int main() {
  Cube c; // default constructor
  Cube myCube; // default constructor

  myCube = c; // assignment operator

  return 0;
}
