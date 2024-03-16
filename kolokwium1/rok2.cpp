#include<iostream>
#include<bitset>
using namespace std;
int main () {
	unsigned short str[] = {52841, 527};
	bitset<16> x(str[0] >> 9);
	bitset<16> y(str[1] << 7);
	unsigned long year = x.to_ulong() | y.to_ulong();
	cout << year << endl;


	return 0;
}
