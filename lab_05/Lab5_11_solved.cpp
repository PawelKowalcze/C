#include<iostream>
using namespace std;
int main () {
	int *y;
	for(size_t i = 0; i < 5; i++){
		int x = 5;
	       	y = &x;	
		cout << y << " : "<< *y << endl;
	}	
	
	cout << y << endl;
	cout << *y << endl;
	return 0;
}
