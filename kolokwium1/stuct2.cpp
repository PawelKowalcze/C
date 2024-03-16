#include<iostream>
using namespace std;
struct Point {
	float x;
	float y;
};

int main () {
	int p = 0;
	Point wsp[2];
	wsp[0].x = 1;
	wsp[1].x = 5;
	wsp[0].y = 3;
	wsp[1].y = 1;

	cout << "Prosze podac wartosc o jaka wspolrzedne przesuna sie po osi y: \n";
	cin >> p;
	for (int i = 0; i<2; ++i) {
		cout << "Wspolrzedne " << i + 1 << " punktu przed operaja to: x: " << wsp[i].x << " y: " << wsp[i].y << endl;
		wsp[i].y += p;
		cout << "Wspolrzedne " << i + 1 << " punktu po operacji to: x: " << wsp[i].x << " y: " << wsp[i].y << endl;
	
	}


	return 0;
}
