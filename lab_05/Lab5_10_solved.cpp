#include<iostream>
using namespace std;
int main () {
	char tab[] = {"dwa slowa"};
	char *x;
	x = tab;
	size_t size = sizeof(tab)/sizeof(tab[0]);
        for (size_t i = 0; i < size - 1; i++) {
		cout << x[i];
	
	
	}
	cout << endl;
	for (size_t i = 4; i < size - 1; i++){
		cout << x[i];
	}	
	cout << endl;

	return 0;
}
