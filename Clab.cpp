#include<iostream>
using namespace std;
int main() {
	// działania na liczbach
	int i = 2;
	int x = 3;
	int z = 5;
	int y = 0;
	i++;
	cout << i << endl;
	y = i + i;
	cout << y << endl;
	y = z * x;
	cout << y << endl;
	y = x%2;
	cout << y << endl;
	y += z;
	cout << y << endl;
	//operatory logiczne

	bool a = (z == 5);
	cout << a << endl;
	bool b = (x == 4);
	cout << b << endl;

	bool c = (x <= 4 && y == 1);
	cout << c <<endl;
	bool d = (x < 1 || y != 1);
	cout << d << endl;
	// operatory bitowe
	
	i = 4;
	z = i^2;
	cout << "Potęgowanie: " << z << endl;
	z = i<<2;
	cout << "Przesunięcie bitowe o 2 w lewo: " << z << endl;
	z = 1;
	x = i & z;
	cout << x << endl;
	x = i | z;
	cout << x << endl;
	// operatory rzutowania
	
	x = 1 << 16;
	short e = x;
	short f = (short)x;
	short g = short(x);
	short h = static_cast<short>(x);
	cout << x << " " << e << " " << f << " " << g << " "  << h << endl;
	// tekst
	
	char t = 40;
	char u;
	u = t + 20;
	cout << u << endl;
	

	// liczby zmiennoprzecinkowe
	
	float k = 1;
	float j = 100000000;
	cout << (k + j) - j << endl;
	cout << k + (j - j) << endl;

	return 0;

}
