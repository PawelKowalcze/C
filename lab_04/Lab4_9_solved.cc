#include<iostream>
using namespace std;
int main () {
	int i = 1;
	for (i; i<=100; i++){
	bool p = 1;
	if (i%3 == 0) {
		cout << "Fizz" << endl;
		p = 0;
	} if (i%5 == 0) {
		cout << "Buzz"<< endl;
		p = 0;	
	} if (p) {
	cout << i << endl;
	}
	}
	return 0;
}
