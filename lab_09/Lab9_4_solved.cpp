#include <iostream>
using namespace std;

class Vector{
    public:
        double *data_;
        Vector(double data){
            data_ = new double;
            *data_ = data;
            cout << "Constructor value: " << *data_ << endl;
            cout << "Constructor address: " << data_ << endl;
        }

        ~Vector(){
            cout << "Destructor value: " << *data_ << endl;
            cout << "Destructor address: " << data_ << endl; 
            delete data_;
        }

        double add(Vector arg){
            return *data_ + *(arg.data_);
        }
};

int main () {
    Vector a(24.0);
    Vector b(1.0);
    cout << a.add(b) << endl;
    return 0;
}