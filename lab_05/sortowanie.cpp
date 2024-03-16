#include<iostream>
using namespace std;
int main () {
    int tmp;
    int *ptrtmp = &tmp;
    const size_t size = 10;
    int random[size];
    int *ptrrandom = random;
    srand(time(NULL));
    for (size_t i = 0; i < size; ++i){
        *(ptrrandom + i) = rand();
        cout << *(ptrrandom + i) << endl;
    }
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j){
            if (*(ptrrandom + i) >= *(ptrrandom + j)){
                
                *ptrtmp = *(ptrrandom + i);
                *(ptrrandom + i) = *(ptrrandom + j);
                *(ptrrandom + j) = *ptrtmp;
            }
        }
    }

    cout << "Result of this operation :\n";

    for (size_t i = 0; i < size; ++i){
        cout << *(ptrrandom + i) << endl;
    }


    return 0;
}