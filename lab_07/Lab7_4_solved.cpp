#include<iostream>
#include<cmath>
using namespace std;

float delta(int a, int b, int c) {
    float delta_;
    delta_ = b*b -4*a*c;
    return delta_;
}

void solutions(float delta_, int a, int b, int c) {
    if (delta_ > 0) {
        float m1;
        float m2;
        m1 = (-b-sqrt(delta_)) / (2*a);
        m2 = (-b+sqrt(delta_)) / (2*a);
        cout << "Function has 2 soultions: " << m1 << " and " << m2 << endl;
    } else if (delta_ < 0) {
        cout << "Function has no real solutions" << endl;
    } else {
        float m0;
        m0 = (-b)/(2*a);
        cout << "Function has one solution: " << m0 << endl;
    }


}

int main () {
    int a;
    int b;
    int c;
    float d;
    cout << "Please insert a, b and c of a quadric equation" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Delta: " << delta(a, b, c) << endl;
    d = delta(a, b, c); 
    solutions(d ,a ,b ,c);


    return 0;
}