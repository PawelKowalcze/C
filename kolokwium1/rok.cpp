#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main() {
  int rok[13];
  unsigned short str[] = {52841, 527l};
  //cout << str[0] << endl;
  //cout << str[1] << endl;
  bitset<16> x(str[0]);
  bitset<16> y(str[1]);
  //cout << x << endl;
  //cout << y << endl;
  //cout << x[0] << endl;
   
  for (int i = 5, j = 0; i >= 0 && j <= 5; i--, j++) {
      rok[j] = y[i];
     
  }

  for (int i = 15, j = 6; i >= 9 && j <= 12; i--, j++) {
      rok[j] = x[i];

  
  } 
  for (int i = 0; i <= 12; i++) {
      cout << rok[i];
  
  }
    

 cout << endl;
 int rok10 = 0;
 for (int i = 12, j = 0; i >= 0 && j <= 12; i--, j++) {
     rok10 += rok[i] * pow(2, j);
 }
 cout << endl << rok10 << endl;




  return 0;
}
	

