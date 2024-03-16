#include<iostream>
using namespace std;

class Klasa {
    private:
        int *value_;
        int value2_;
    public:

    Klasa(int value, int value2){
        value_ = new int;
        *value_ = value;
        value2_ = value2;
    }

    ~Klasa(){
        delete value_;
    }

    int getValue_(){
        return *value_;
    }
    
    int getValue2_(){
        return value2_;
    }

    void setV_(int x1){
        *value_ = x1;
    }
    
    void setV2_(int x1){
        value2_ = x1;
    }

    void printV_(){
        cout << *value_ << endl;
    }

    void printV2_(){
        cout << value2_ << endl;
    }

};


int main () {
    Klasa object(1,2);
    cout << object.getValue_() << endl;
    cout << object.getValue2_() << endl;
    object.printV_();
    object.setV_(150);
    object.printV_();
    object.setV2_(1300);
    object.printV2_();

    return 0;
}