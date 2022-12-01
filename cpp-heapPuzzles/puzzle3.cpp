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
  int *p, *q;
  cout << "p = " << p << endl;
  p = new int;
  cout << "p = " << p << endl;
  *p = 4;
  cout << "p = " << p << endl;
  q = p;
  cout << "q = " << q << endl;
  *q = 8;
  cout << *p << endl;

  q = new int;
  *q = 9;
  cout << "*p = " << *p << endl;
  cout << "*q = " << *q << endl;
  cout << "p = " << p << endl;

  return 0;
}
