//============================================================================
// Name        : Lab1.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on array iteration
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab10[5] = {1, 2, 3, 5, 8};
  int tab2[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  cout << "Pierwsza tablica:" << endl;
  for(int i = 0; i < 5; i++){
      cout << tab10[i] << endl;
  }

  cout << "Druga tablica:" << endl;
  for(int i = 0; i < 8; i++){
      cout << tab2[i] << endl;
  }
	int tab3[] = {1};
  	int i = 1;
	while(i>=0){
	tab3[i] = i;
	cout<< tab3[i] << " "<< endl;
	i++;
	}

  return 0;
}
