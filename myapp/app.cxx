#include <iostream>
#include "mylibA.h"

using namespace std;
using namespace mylibA;

int main()
{
  ClassA *x, *y, *z;
  x = ClassA::create();
  y = x->create();
  z=  y->create();

  x->Do();
  y->Do();
  z->Do();

  delete x; 
  delete y; 
  delete z;

  return 0;
}
