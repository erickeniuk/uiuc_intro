/**
 * Simple C++ making use of std::cout and a `Cube` class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

using std::cout;
using std::endl;

int main() {
  uiuc::Cube c;
  c.setLength(2.4);
  std::cout << "Volume: " << c.getVolume() << std::endl;

  double surfaceArea = c.getSurfaceArea();
  std::cout << "Surface Area: " << surfaceArea << std::endl;
  
  cout << "Hello, World!" << endl;

  return 0;
}
