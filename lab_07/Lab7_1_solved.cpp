#include<iostream>
using namespace std;

struct Car {
	int displacement;
	int seats;
};

int main () {	
	Car *p = new Car;
	p->displacement = 10;
	p->seats = 5;
	
	cout << p->displacement << " "<< p->seats << endl; 
	delete p;


	return 0;
}
