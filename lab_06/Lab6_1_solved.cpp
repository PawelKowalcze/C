#include<iostream>
using namespace std;

int add(int *a, int *b){
    int c = *a + *b;
    return c;
}

int sub(int *a, int *b){
    int c = *a - *b;
    return c;
}

int main () {
    int a = 5;
    int b = 8;
    int *ptra = &a;
    int *ptrb = &b;
    cout << "Addition: " << add(ptra, ptrb) << endl;
    cout << "Subtraction: " << sub(ptra, ptrb) << endl;
    cout << "Addition 2: " << a + *ptrb << endl;
    cout << "Subtraction 2: " << a - *ptrb << endl;


    return 0;
}