#include<iostream>
using namespace std;
int main () {
    size_t size;
    cout << "Enter size of array: \n";
    cin >> size;
    char tab[size];
    char *ptrtab = tab;
    size_t n = 0;
    for (size_t i = 0; i < size; ++i) {
        *(ptrtab + i) = 97 + i;
    }
    
    for (size_t i = 0; i < size; i+=2) {
        cout << *(ptrtab + i) << endl;
    }
    
    for (size_t i = 0; i < size;) {
        n += i;
        if (n < size){
        cout << *(ptrtab + n) << endl;
        cout << n << endl;
        }
        i++;   
    }



    return 0;
}