#include<iostream>
#include<cmath>
using namespace std;

struct mz{
    float m0;
    float m1;
    float m2;
};

struct abc{
    int a;
    int b;
    int c;
};

float delta(abc values) {
    float delta_;
    delta_ = values.b*values.b -4*values.a*values.c;
    return delta_;
}

mz solutions(float delta_, abc values) {
    mz solution;
    mz *p = &solution;
    if (delta_ > 0) {
        p->m1 = (-values.b-sqrt(delta_)) / (2*values.a);
        p->m2 = (-values.b+sqrt(delta_)) / (2*values.a);
    } else if (delta_ < 0) {
        cout << "Function has no real solutions" << endl;
    } else {
        p->m0 = (-values.b)/(2*values.a);
    }

    return *p;
}

int main () {
    abc values;
    float d;
    cout << "Please insert a, b and c of a quadric equation" << endl;
    cin >> values.a;
    cin >> values.b;
    cin >> values.c;
    cout << "Delta: " << delta(values) << endl;
    d = delta(values); 
    mz sol = solutions(d ,values);
    if (d == 0){
        cout << sol.m0 << endl; 
    }
    if (d > 0){
        cout << sol.m1 << " " << sol.m2 << endl; 
    }

    return 0;
}