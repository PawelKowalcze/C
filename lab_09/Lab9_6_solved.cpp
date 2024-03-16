#include <iostream>
#include <cstring>
using namespace std;

struct Dimentions {
    double x;
    double y;
    double z;
};

class Vector {
    private:
        double *x_;
        double *y_;
        double *z_;
    public:
        Vector(Dimentions diment) {
            x_ = new double (diment.x);
            y_ = new double (diment.y);
            z_ = new double (diment.z);
            /*cout << "Constructor x value: " << *x_ << endl;
            cout << "Constructor x address: " << x_ << endl;
            cout << "Constructor y value: " << *y_ << endl;
            cout << "Constructor y address: " << y_ << endl;
            cout << "Constructor z value: " << *z_ << endl;
            cout << "Constructor z address: " << z_ << endl;*/
        }

        Vector(const Vector &copy) { // konstruktor kopiujacy
            x_ = new double;
            y_ = new double;
            z_ = new double;
            memcpy(x_, copy.x_, sizeof(double));
            memcpy(y_, copy.y_, sizeof(double));
            memcpy(z_, copy.z_, sizeof(double));
        }

        ~Vector(){
            //cout << "Constructor x value: " << *x_ << endl;
            //cout << "Constructor x address: " << x_ << endl;
            delete x_;
            //cout << "Constructor y value: " << *y_ << endl;
            //cout << "Constructor y address: " << y_ << endl;
            delete y_;
            //cout << "Constructor z value: " << *z_ << endl;
            //cout << "Constructor z address: " << z_ << endl;
            delete z_;
        }

        double getX(){
            return *x_;
        }

        double getY(){
            return *y_;
        }

        double getZ(){
            return *z_;
        }

        void add(Vector arg) {
            *x_ += *(arg.x_); 
            *y_ += *(arg.y_);
            *z_ += *(arg.z_);
        }
};

Dimentions enterDim(){
    Dimentions dim_;
    cout << "Enter dimentions of vector: \n";
    cin >> dim_.x;
    cin >> dim_.y;
    cin >> dim_.z;
    return dim_;
}

int main () {
    Dimentions dim1 = enterDim();
    Vector vec1(dim1);
    Dimentions dim2 = enterDim();
    Vector vec2(dim2);
    vec1.add(vec2);
    cout << "Summed vectors is: \n";
    cout << vec1.getX() << endl;
    cout << vec1.getY() << endl;
    cout << vec1.getZ() << endl;
    return 0;
}