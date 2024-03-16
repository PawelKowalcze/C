//============================================================================
// Name        : Lab7_7.cpp
// Author      : Michal Grega
// Version     :
// Copyright   : Copyright AGH 2017
// Description : Function definition and declaration
//============================================================================

#include<iostream>
using namespace std;

float f(float);

int main() {
   cout << f(7.1) << endl;
}

float f(float x){
	x += 10;
	
   return ++x;
}
