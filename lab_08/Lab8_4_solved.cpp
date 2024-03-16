#include<iostream>
using namespace std;

class vector2d {
    public:
        int x1;
        int x2;

        void print2d() {
            cout << "Coordinates are: " << x1 << " , " << x2 << endl;
        }
        
        void add(vector2d vec) {
            x1 += vec.x1;
            x2 += vec.x2;
            cout << "Added coordinates are: " << x1 << " , " << x2 << endl;
        }

        /*void sub(vector2d vect) {
            x1 -= vect.x1;
            x2 -= vect.x2;
            cout << "Subtracted coordinates are: " << x1 << " , " << x2 << endl;
        }*/


};



int main () {
    vector2d vector1, vector2, vector3;
    vector1.x1 = 5;
    vector1.x2 = 10;
    vector1.print2d();
    vector2.x1 = 1;
    vector2.x2 = 2;
    vector2.print2d();
    vector1.add(vector2);
    vector3.x1 = 10;
    vector3.x2 = 20;
    vector2.add(vector3);
    vector3.add(vector1);
    //vector1.sub(vector2);
    //vector2.sub(vector1);

    return 0;
}