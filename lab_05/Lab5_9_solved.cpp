#include<iostream>
using namespace std;
int main () {
	int x = 14;
	int *y;
	y = &x;	
	cout << *y << endl;
	*y += 2;
       	cout << *y << endl;
	cout << x << endl;	

	return 0;
}
