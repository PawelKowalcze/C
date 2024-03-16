#include<iostream>
#include<bitset>
using namespace std;
int main () {
	short dzien = 24;
	short kwartal = 3;
	char data;
	data = dzien | (kwartal << 6);
	bitset<8> x;
	x = data;
	cout << x << endl;

	return 0;
}
