#include <iostream>
using namespace std;

class Vec {
    private:
        int x_;
        int y_;
    public:
        Vec(int x, int y) {
            x_ = x;
            y_ = y;
        }

        int getX(){
            return x_;
        }

        int getY(){
            return y_;
        }

        void add_one(){
            x_ += 1;
            y_ += 1;
        } 

        void printCopy(Vec v){ // przez kopie funkcja add_one nie dziala 
            v.add_one();
            cout << "x = " << x_ << " y = " << y_ << endl;

        }

        void printPointer(Vec *v){
            v->add_one();
            cout << "x = " << x_ << " y = " << y_ << endl;
        }
        
        void printReference(Vec &v){
            v.add_one();
            cout << "x = " << x_ << " y = " << y_ << endl;
        }
        // stala referencja nie dziala - nie mozna wywolac metody bo v jest const
        /*void printConstReference(const Vec &v){
            v.add_one();
            cout << "x = " << x_ << " y = " << y_ << endl;
        }*/

        void printArr(Vec *array, size_t arrayLength){
            for (size_t i = 0; i < arrayLength; ++i) {
                (array + i)->add_one();
                cout << "x = " << (array + i)->getX() << " y = " << (array + i)->getY() << endl;
            }
            

        }




};

int main () {
    Vec u(2,3);
    Vec v(5,6);
    Vec z(9,0);
    Vec arrayVec[] = {Vec(1,2), Vec(3,4), Vec(5,6), Vec(8,4), Vec(5,9)};
    size_t arrayLength = sizeof(arrayVec) / sizeof(arrayVec[0]);
    cout << "x = " << u.getX() << " y = " << u.getY() << endl;
    u.printCopy(u);
    cout << "x = " << u.getX() << " y = " << u.getY() << endl;
    cout << "x = " << v.getX() << " y = " << v.getY() << endl;
    v.printPointer(&v);
    cout << "x = " << v.getX() << " y = " << v.getY() << endl;
    cout << "x = " << z.getX() << " y = " << z.getY() << endl;
    z.printReference(z);
    cout << "x = " << z.getX() << " y = " << z.getY() << endl;
    arrayVec[0].printArr(arrayVec, arrayLength);


    return 0;
}