#include<iostream>
#include<bitset>
using namespace std;
int main () {
	int date_1 = 1035264;
	int date_2 = 1034898;
	int date_3 = 1023634;
	bitset<16> x(date_1 >> 9) ;
	bitset<16> y(date_2 >> 9) ;
	bitset<16> z(date_3 >> 9) ;
	unsigned long year1 = x.to_ulong ();
	unsigned long year2 = y.to_ulong ();
	unsigned long year3 = z.to_ulong ();
	cout << year1 << endl;
	cout << year2 << endl;
	cout << year3 << endl;

	return 0;
}
