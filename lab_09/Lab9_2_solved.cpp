#include <iostream>
#include <cmath>
using namespace std;

class Vector{
    private:
        double *data_;
        size_t dimension_;
    public:
        Vector(double Value1){
            dimension_ = 1;
            data_ = new double[dimension_];
            *data_ = Value1;
        }

        Vector(double Value1, double Value2){
            dimension_ = 2;
            data_ = new double[dimension_];
            *data_ = Value1;
            *(data_ + 1) = Value2;
        }

        Vector(double Value1, double Value2, double Value3){
            dimension_ = 3; 
            data_ = new double[dimension_];
            *data_ = Value1;
            *(data_ + 1) = Value2;
            *(data_ + 2) = Value3;
        }

        ~Vector(){
            delete []data_;
        }

        double abs(){
            switch(dimension_){
                case 1:
                    return *data_;
                break;
                case 2:
                    return *data_ + *(data_ + 1);
                break;
                case 3:
                    return *data_ + *(data_ + 1) + *(data_ + 2);
                break;
                default:
                    return 0;
                break;

            }


        }

};

int main () {
    Vector r1(0.0);
    Vector r2(1.0, 2.0);
    Vector r3(1.0, 3.0, 4.0);
    cout << r1.abs() << endl;
    cout << r2.abs() << endl;
    cout << r3.abs() << endl;

    return 0;
}