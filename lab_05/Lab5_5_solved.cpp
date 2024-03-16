//============================================================================
// Name        : Lab5.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on array of structures
//============================================================================

#include <iostream>
using namespace std;

struct car{
  int sits;
  float range;
};

int main() {
  size_t length = 0;
  int sits;
  float range;

  car *x;
  car *y;
  car tab[10];
  x = &tab[0];
  x->sits = 5;
  x->range = 500;
  cout << tab[0].sits << "\n" << tab[0].range << endl;
  car au = {30, 1500};
  y = &tab[1];
  *y = au;
  cout << y->sits << "\n" << y->range << endl;
  length = sizeof(tab)/sizeof(tab[0]);
  cout << length << endl;
  return 0;
}
