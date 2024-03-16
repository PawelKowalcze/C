#include<iostream>
using namespace std;
int main () {
	float x = 0;
	for(x; x <= 100; x+=0.5){
	if (x != (int)x) {
		cout << x << " : fractional \n";
	} else {
		cout << x << " : integer \n";
	}
	
	}

	return 0;
}
