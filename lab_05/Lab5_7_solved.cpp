//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  char tab[2] = {49, 50};

  cout << "Adres pierwszsego elementu: " <<  static_cast<void*>(&tab[0]) << "\n" <<tab[0] << endl;
  cout << "Adres drugiego elementu: " << static_cast<void*>(&tab[1]) << "\n" << tab[1] << endl;

  return 0;
}
