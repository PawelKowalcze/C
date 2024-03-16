#include<iostream>
using namespace std;
int main () {
	int tab[10];
	int i = 1;
	for (i ;i <= 10; i++) {
		tab[i-1] = i*i;
	}
	/*for (int x = 0; x < 4; x++) {
		cout << tab[x] 
	
	
	}*/
	cout << tab[0] << endl;
	cout << tab[4] << endl;
	cout << tab[2] << endl;
	cout << tab[9] << endl;


	return 0;
}
