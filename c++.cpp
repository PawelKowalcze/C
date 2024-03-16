#include <iostream>
using namespace std;
int main (){
	cout << "Hello world!" << endl;
	
	int i = 0;
	int x = 0;
	int w = 1;
	while (w == 1) {
		cout << "Prosze wprowadzic ilosc gwiazdek ktore program ma wyswietlic: \n";
		i = 0;
		cin >> x;	
		for (i; i<x; i++) {
			cout << "*" << endl;	
		}
	
		cout << "Czy chcesz powtórzyć operację \n 1 - tak \n 2 - nie \n";
		cin >> w;
		if (w != 1 && w != 2) {
			cout << "Wprowadzono niepoprawną liczbe, sprobuj ponownie \n";
			cin >> w;	
		}
	}
	return 0;
}
