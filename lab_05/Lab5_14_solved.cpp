#include<iostream>
using namespace std;

int main () {
    size_t size[] = {1, 2, 3, 4};
    int tab1[size[0]];
    int tab2[size[1]];
    int tab3[size[2]];
    int tab4[size[3]] = {15, 100, 6, 45}; 
    int *ptrtab[] = {tab1, tab2, tab3, tab4}; 
  
    for(int i = sizeof(ptrtab)/sizeof(ptrtab[0]); i > 0; --i){
    
        cout << "Array: " << i << endl;
        
        for (int j = size[i-1] - 1; j >= 0; --j){    

            if ((i-2) == j) {
                *(ptrtab[i-2] + j) = *(ptrtab[i-1] + j) + *(ptrtab[i-1] + j + 1);
            } else if ((i-2) > 0){
                *(ptrtab[i-2] + j) = *(ptrtab[i-1] + j);        
            } else if ((i-2) == 0){
                *(ptrtab[0] + j) = *(ptrtab[1] + j) + *(ptrtab[1] + j + 1);
            }

            cout << *(ptrtab[i-1] + j) << endl;
        }

    }
    return 0;
}