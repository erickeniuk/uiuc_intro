/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

namespace uiuc {
  // Custom default constuctor
  Cube::Cube() {
    length_ = 1;
    std::cout << "Default constructor invoked!" << std::endl;
  }
  // Custom copy constructor
  Cube::Cube(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Copy constructor invoked!" << std::endl;
  }
  // Custom assignment operator
  // Returns a cube by reference
  Cube & Cube::operator=(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Assignment operator invoked!" << std::endl;    
    return *this;
  }

  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
