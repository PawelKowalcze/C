/*#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main () {
    int size = 1;
    vector<float> dynamicArray(size);
    int number;
    int x = 1;
    int i = 0;
    while (x != 0){
        cout << "Enter a number: \n";
        cin >> number;
        dynamicArray[i] = number; 
        //cout << sqrt(dynamicArray[i]) << endl;
        i++;
        if (number <= 0) {
            x = 0;
        }

    }

    for (size_t k = 1; k < i; ++k){
        if (k > 1){
            for(size_t j = 0; j < k-1; ++j){
                cout << "Index j: " <<  j << " value: " << dynamicArray[j] << " Index i: " << k << " square root value: " << (sqrt(dynamicArray[k-1])) << endl;
                if((dynamicArray[j] == (sqrt(dynamicArray[k-1]))) || (dynamicArray[k-1] == (sqrt(dynamicArray[j]))) ){
                    
                    cout << dynamicArray[j] << " is a square root of " << dynamicArray[k-1] << " or otherwise. Index of array: " << k-1 << endl;
                    x = 0; 
                }

            }
        }
    }
    return 0;
}*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main () {
    vector<float> dynamicArray;
    int number;
    int x = 1;
    int i = 0;
    while (x != 0){
        cout << "Enter a number: \n";
        cin >> number;
        dynamicArray.resize(dynamicArray.size() + 1, number);
//        dynamicArray[i] = number;
        //cout << sqrt(dynamicArray[i]) << endl;
        i++;

        if (i > 1 && number != 0){
            for(size_t j = 0; j < i-1; ++j){
                //cout << "Index j: " <<  j << " value: " << dynamicArray[j] << " Index i: " << i << " square root value: " << (sqrt(dynamicArray[i-1])) << endl;
                if((dynamicArray[j] == (sqrt(dynamicArray[i-1]))) || (dynamicArray[i-1] == (sqrt(dynamicArray[j]))) ){

                    cout << dynamicArray[j] << " is a square root of " << dynamicArray[i-1] << " or otherwise. Index of array: " << i-1 << endl;
                    x = 0;
                }

            }
        }

        if (number <= 0) {
            x = 0;
        }


    }

    return 0;
}