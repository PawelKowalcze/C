//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurence counting
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab[10];
  int digits[] = {0, 4, 5, 3, 2, 5, 6, 1, 5, 7, 9, 2, 1, 2, 9, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};
  size_t size = 0;
  size = sizeof(digits)/sizeof(digits[0]);

  for (int i = 0; i < size; i++){
  	for (int j = 0; j < 10; j++) {
	  	if(digits[i] == j) {
	  		tab[j] += 1;
			break;	
	  	}
	} 
  }

  for (int i = 0; i < 10; i++) {
  	cout << "Cyfra " << i << " pojawila sie " << tab[i] << " razy. \n";
  }

  return 0;	
}
