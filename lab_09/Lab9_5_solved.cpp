#include <iostream>
#include <cstring>
using namespace std;

class Vector1{
    public:
        double *data_;
        Vector1(double data){
            data_ = new double;
            *data_ = data;
            cout << "Constructor value: " << *data_ << endl;
            cout << "Constructor address: " << data_ << endl;
        }

        ~Vector1(){
            cout << "Destructor value: " << *data_ << endl;
            cout << "Destructor address: " << data_ << endl; 
            delete data_;
        }

        double add(Vector1 *arg){
            return *data_ + *(arg->data_);
        }
};

class Vector2{
    public:
        double *data_;
        Vector2(double data){
            data_ = new double;
            *data_ = data;
            cout << "Constructor value: " << *data_ << endl;
            cout << "Constructor address: " << data_ << endl;
        }

        ~Vector2(){
            cout << "Destructor value: " << *data_ << endl;
            cout << "Destructor address: " << data_ << endl; 
            delete data_;
        }

        double add(Vector2 &arg){
            return *data_ + *(arg.data_);
        }
};

class Vector3{
    public:
        double *data_;
        Vector3(double data){
            data_ = new double;
            *data_ = data;
            cout << "Constructor value: " << *data_ << endl;
            cout << "Constructor address: " << data_ << endl;
        }

        Vector3(const Vector3 &copy){
            data_ = new double;
            memcpy(data_, copy.data_, sizeof(double));
            cout << "Copy constructor value: " << *data_ << endl;
            cout << "Copy constructor address: " << data_ << endl;
        }

        ~Vector3(){
            cout << "Destructor value: " << *data_ << endl;
            cout << "Destructor address: " << data_ << endl; 
            delete data_;
        }

        double add(Vector3 arg){
            return *data_ + *(arg.data_);
        }
};

int main () {
    Vector1 a(24.0);
    Vector1 b(1.0);
    cout << a.add(&b) << endl;
    //cout << b.add(a) << endl;

    Vector2 c(2.0);
    Vector2 d(5.0);
    cout << c.add(d) << endl;

    Vector3 e(7.0);
    Vector3 f(10.0);
    cout << e.add(f) << endl;
    return 0;
}