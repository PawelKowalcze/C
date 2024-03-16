#include<iostream>
using namespace std;

class Vector2D {
    private:
        float *coo_;
    public:
        Vector2D(float x1, float x2){ // konstruktor
            coo_ = new float[2];
            coo_[0] = x1; 
            coo_[1] = x2;
       }
       

        float getX1(){ // getter
            return coo_[0];
        }

        float getX2(){ // getter
            return coo_[1];
        }

        void print2d() {
            cout << "Coordinates are: " << coo_[0] << " , " << coo_[1] << endl;
        }
        
        void add(const Vector2D &vec) {
            coo_[0] += vec.coo_[0];
            coo_[1] += vec.coo_[1];
            cout << "Added coordinates are: " << coo_[0] << " , " << coo_[1] << endl;
        }
        
        ~Vector2D(){ // destruktor
            delete [] coo_;
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
    cout << vector1.getX1() << endl;
    cout << vector1.getX2()<< endl;
    vector1.print2d();
    vector2.print2d();
    vector3.print2d();
    vector1.add(vector2);
    vector2.add(vector3);
    vector3.add(vector1);

    delete vec1;
    return 0;
}