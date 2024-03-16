#include<iostream>
using namespace std;
int clipping(int x){
	if (x<10) {
		x = 10;
	}
	else if (x>20) {
		x = 20;
	}
	else {
		x;
	}
	return x;

}


int main () {
	int a;
	cout << "Prosze podac wartosc: \n";
	cin >> a;
	cout << clipping(a) << endl;

	return 0;
}
