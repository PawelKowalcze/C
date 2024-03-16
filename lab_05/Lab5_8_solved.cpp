//============================================================================
// Name        : Lab8.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on reference and dereference
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int *x;
  int y = 2;

  x = &y;
  // x = y;
  *x = y;
  //*x = &y;
  cout << "Wartosc zmiennej: " << y << endl;
  cout << "Adres zmiennej: " << &y << endl;
  cout << "Adres wskazywany przez wskaznik: " << x << endl;
  cout << "Wartosc wskaznika: " << *x << endl;
  return 0;
}
