#include<iostream>
using namespace std;
int main () {
	size_t size = 0;
 	cout << "Prosze podac rozmiar tablicy \n";
	cin >> size;
	int *p = new int[size]; 
	for(size_t i = 0; i < size; ++i) {
		*(p+i) = 2*i;
		cout << *(p+i) << endl;
	}
	delete []p;
	return 0;
}
