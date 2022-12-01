/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c; // default constructor
  Cube myCube; // default constructor

  myCube = c; // sets default constructor to default constructor as copy constructor but
  // due to myCube already being used, nothing should happen. myCube was already constructed.

  return 0;
}
