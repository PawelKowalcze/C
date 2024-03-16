#include<iostream>
using namespace std;

class Vector2D {
    private:
        float x1_;
        float x2_; 
    public:
        Vector2D(float x1, float x2){ // konstruktor
            x1_ = x1;
            x2_ = x2;
       }

        float getX1(){ // getter
            return x1_;
        }

        float getX2(){ // getter
            return x2_;
        }

        void setCoord(float x1, float x2){ // setter
            x1_ = x1;
            x2_ = x2;
        }

        void print2d() {
            cout << "Coordinates are: " << x1_ << " , " << x2_ << endl;
        }
        
        void add(Vector2D vec) {
            x1_ += vec.x1_;
            x2_ += vec.x2_;
            cout << "Added coordinates are: " << x1_ << " , " << x2_ << endl;
        }
};



int main () {
    Vector2D vector1(1,2); /*  vector1(a,b) jest wymagane aby uruchomil sie program, dzieje sie to przez dodany konstruktor */
    Vector2D *vec1 = new Vector2D(55,123);
    cout << vec1->getX1() << endl;
    cout << vec1->getX2() << endl;
    vec1->print2d();
    vec1->add(vector1);/* dodanie vector1 przed jego nadpisaniem*/
    Vector2D vector2(3,4);
    Vector2D vector3(5,6);
    vector1.setCoord(5,10);  /* tutaj vector1(a,b) zostaje nadpisany*/
    cout << vector1.getX1() << endl;
    cout << vector1.getX2()<< endl;
    vector1.print2d();
    vector2.setCoord(1,2);
    vector2.print2d();
    vector3.setCoord(3,4);
    vector3.print2d();
    vector1.add(vector2);
    vector2.add(vector3);
    vector3.add(vector1);

    delete vec1;
    return 0;
}