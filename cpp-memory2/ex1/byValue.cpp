/**
 * C++ program copying a Cube currency by value.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10); // initializes with 1000 volume

  // Transfer the cube
  Cube myCube = c; // copy constructor which creates 2 cubes of 1000 each or 2000 total

  return 0;
}
