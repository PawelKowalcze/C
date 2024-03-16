#include<iostream>
#include<cstdlib>
using namespace std;
int main () {
    int swap1;
    int *ptrswap1 = &swap1;
    int swap2;
    int *ptrswap2 = &swap2;
    const size_t size = 10;
    int random[size];
    int *ptrrandom = random;
    srand(time(NULL));
    for (size_t i = 0; i < size; ++i){
        *(ptrrandom + i) = rand();
        cout << *(ptrrandom + i) << endl;
    }
    cout << "Enter indexes of array that you would like to swap \n";
    cin >> *ptrswap1;
    cin >> *ptrswap2;
    
    int tmp;
    int *ptrtmp = &tmp;
    *ptrtmp = *(ptrrandom + swap1-1);
    *(ptrrandom + swap1-1) = *(ptrrandom + swap2-1);
    *(ptrrandom + swap2-1) = *ptrtmp;

    cout << "Swapped values: " << *(ptrrandom + swap1-1) << " , " << *(ptrrandom + swap2-1) << endl;

    for (size_t i = 0; i < size; ++i){
        cout << *(ptrrandom + i) << endl;
    }

    return 0;
}