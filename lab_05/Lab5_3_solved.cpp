#include<iostream>
using namespace std;
int main (){
	int sum = 0;
	int s = 0;
	int ws = 0;
	int tmpMax = -9999;
	int tmpMin = 9999;
	int tab[5] = {-7,10,3,70,5};
	s = sizeof(tab)/sizeof(int);
	for (int i = 0; i < s; i++) {
		sum += tab[i];
		if (tab[i] <= tmpMin) {
			tmpMin = tab[i];
		}
		if (tab[i] >= tmpMax) {
			tmpMax = tab[i];
		}
	}
	ws = sum/s;
	cout << sum << endl;
	cout << tmpMin << endl;
	cout << tmpMax << endl;
	cout << ws << endl;


	return 0;
}
