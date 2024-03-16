#include<iostream>
using namespace std;

struct Car {
    float car_price;
    float car_range;
};

void swap1(int *addr, size_t size) {
    for (int i = 0; i < (size/2); ++i) {
        int tmp = *(addr + (size - i - 1));
        *(addr + (size - i - 1)) = *(addr + i);
        *(addr + i) = tmp;
    }
}

void swap2(double *addr, size_t size) {
    for (int i = 0; i < (size/2); ++i) {
        int tmp = *(addr + (size - i - 1));
        *(addr + (size - i - 1)) = *(addr + i);
        *(addr + i) = tmp;
    }
}

void swap3(Car *addr, size_t size) {
    for (int i = 0; i < (size/2); ++i) {
        int tmp1 = (addr + (size - i - 1))->car_price;
        (addr + (size - i - 1))->car_price = (addr + i)->car_price;
        (addr + i)->car_price = tmp1;
        int tmp2 = (addr + (size - i - 1))->car_range;
        (addr + (size - i - 1))->car_range = (addr + i)->car_range;
        (addr + i)->car_range = tmp2;
    }
}


int main () {
    size_t sizetab1 = 5;
    int tab1[sizetab1];
    int *pointer1 = tab1;
    size_t sizetab2 = 10;
    double tab2[sizetab2];
    double *pointer2 = tab2;
    size_t sizetab3 = 14;
    Car tab3[sizetab3];
    Car *pointer3 = tab3;

    cout << "Created tab: \n";

    for (size_t i = 0; i < sizetab1; ++i){
        *(pointer1 + i) = 2*i;
        cout << "Address: " << (pointer1 + i) << " Value: " << *(pointer1 + i)<< endl;
    }

        swap1(pointer1, sizetab1);

        cout << "Swapped tab: \n";

    for (size_t i = 0; i < sizetab1; ++i){
        cout << "Address: " << (pointer1 + i) << " Value: " << *(pointer1 + i)<< endl;
    }

        cout << "Created tab: \n";

    for (size_t i = 0; i < sizetab2; ++i){
        *(pointer2 + i) = 3*i;
        cout << "Address: " << (pointer2 + i) << " Value: " << *(pointer2 + i)<< endl;
    }

        swap2(pointer2, sizetab2);

        cout << "Swapped tab: \n";

    for (size_t i = 0; i < sizetab2; ++i){
        cout << "Address: " << (pointer2 + i) << " Value: " << *(pointer2 + i)<< endl;
    }

        cout << "Created tab: \n";

    for (size_t i = 0; i < sizetab3; ++i){
        (pointer3 + i)->car_price = 4*i;
        (pointer3 + i)->car_range = 20*i;
        cout << "Car price - Address: " << &(pointer3 + i)-> car_price << " Value: " << (pointer3 + i)->car_price << endl;
        cout << "Car range - Address: " << &(pointer3 + i)-> car_range << " Value: " << (pointer3 + i)->car_range << endl;
    } 

        swap3(pointer3, sizetab3);

        cout << "Swapped tab: \n";

    for (size_t i = 0; i < sizetab3; ++i){
        cout << "Car price - Address: " << &(pointer3 + i)-> car_price << " Value: " << (pointer3 + i)->car_price << endl;
        cout << "Car range - Address: " << &(pointer3 + i)-> car_range << " Value: " << (pointer3 + i)->car_range << endl;
    } 

    return 0;
}