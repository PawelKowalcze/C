#include<iostream>
using namespace std;


struct Dimentions {
	float x;
	float y; 
	float z;

};

int main () {
	int tab1[] = {1,2,3,4,5,6,7,8,9,0};
	double tab2[] = {0.99, 1, 34.14};
	int *wsk1 = tab1;
	double *wsk2 = tab2;
	Dimentions *wsk3;
	Dimentions *wsk4;
	size_t size1;
	size_t size2;
	size_t size3;
	size1 = sizeof(tab1) / sizeof(tab1[0]);
	size2 = sizeof (tab2) / sizeof(tab2[0]);
	for(size_t i = 0; i < size1; i++){
		cout << wsk1 << " : " << *wsk1 << endl;
		wsk1++;
	}

	for(size_t i = 0; i < size2; i++){
		cout << wsk2 << " : " << *wsk2 << endl;
		wsk2++;
	}
	
	Dimentions tab3[2];
	wsk3 = &tab3[0];
	wsk4 = &tab3[1];
	size3 = sizeof(tab3) / sizeof(tab3[0]);
       	for(size_t i = 0; i < size3; i++){
		tab3[i].x = i;
		tab3[i].y = i + 2;
 		tab3[i].z = i + 4;
	}
	cout << wsk3->x << wsk3->y << wsk3->z << " : " << wsk3 << endl;
	cout << wsk4->x << wsk4->y << wsk4->z << " : " << wsk4 << endl;

	return 0;
}
