#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

struct numberParts{
    float re;
    float im;
};

class complexCalc {
    private:
        float real_;
        float imag_;
    public:
        complexCalc(float real, float imaginary) { // konstruktor
            real_ = real;
            imag_ = imaginary;
        }

        void setComplexNum(numberParts num){ //setter
            real_ = num.re;
            imag_ = num.im;
        }

        float getComplexNumReal(){ // getter
            return real_;
        }
        
        float getComplexNumImag(){ // getter
            return imag_;
        }

        bool isReal(){
            if(imag_ == 0){
                cout << "Number is real \n";
                return true;
            } else {
                cout << "Number isn't real \n";
                return false;
            }
        }

        bool isImag(){
            if (imag_ != 0){
                cout << "Number is complex \n";
                return true;
            } else {
                cout << "Number isn't complex \n";
                return false;
            }
        }

        bool equals(complexCalc num){
            if (real_ == num.real_ && imag_ == num.imag_){
                cout << "Numbers are equal \n";
                return true;
            } else { 
                cout << "Numbers are different\n";
                return false;
            }

        }

        void add(complexCalc num) {
            real_ += num.real_;
            imag_ += num.imag_;
        }

        void substract(complexCalc num) {
            real_ -= num.real_;
            imag_ -= num.imag_;
        }

        void multiplication(complexCalc num) {
            float tmp1;
            float tmp2;
            tmp1 = real_ * num.real_ - imag_ * num.imag_;
            tmp2 = real_ * num.imag_ + imag_ * num.real_;
            real_ = tmp1;
            imag_ = tmp2;
        }
    

        void printComplexNum(){
            if(imag_>0 && real_ != 0){
                cout << real_ << "+" << imag_ << "i" << endl; 
            } else if (imag_ == 0 && real_ != 0) {
                cout << real_ << endl;
            }else if (real_ == 0 && imag_ !=0) {
                cout << imag_ << "i" << endl;
            } else if (real_ == 0 && imag_ == 0){
                cout << real_ << endl;
            } else {
                cout << real_ << imag_ << "i" << endl;
            }
        }

        string toString() {
            ostringstream oss1;
            ostringstream oss2;
            oss1 << fixed << setprecision(0) << real_;
            oss2 << fixed << setprecision(0) << imag_;
            string numString;
            if(imag_>0 && real_ != 0){
                numString =  oss1.str() + "+" + oss2.str() + "i";
            } else if (imag_ == 0 && real_ != 0) {
                numString =  oss1.str();
            }else if (real_ == 0 && imag_ !=0) {
                numString = oss2.str() + "i";
            } else if (real_ == 0 && imag_ == 0){
                numString = oss1.str();
            } else {
                numString = oss1.str() + oss2.str() + "i";
            }
            return numString;
        }

};



numberParts enterNumber(numberParts num) {
    cout << "Enter complex number: " << endl;
    cin >> num.re;
    cin >> num.im;
    return num;
}



int main(){
    int userAction;
    int controlNumber = 1;
    numberParts number;
    complexCalc num1(0,0);
    complexCalc num2(0,0);
    while (controlNumber == 1){
        cout << " Choose your action: \n 1. Check if your number is real \n 2. Check if your number is complex \n 3. Check if your numbers are equal \n 4. Add two numbers \n 5. Substract two numbers \n 6. Print your numbers \n 7. Print your numbers as a string \n 8. Multiply your numbers \n 9. Exit calculator \n";
        cin >> userAction;
        switch(userAction){
            case 1:
                num1.setComplexNum(enterNumber(number));
                cout << "Your number is: \n";
                num1.printComplexNum();
                num1.isReal();
            break;
            case 2:
                num1.setComplexNum(enterNumber(number));
                cout << "Your number is: \n";
                num1.printComplexNum();
                num1.isImag();
            break;
            case 3:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                num1.printComplexNum();
                num2.printComplexNum();
                num1.equals(num2);
            break;
            case 4:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                num1.printComplexNum();
                num2.printComplexNum();
                num1.add(num2);
                cout << "Result of addition is: \n";
                num1.printComplexNum();
            break;
            case 5:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                num1.printComplexNum();
                num2.printComplexNum();
                num1.substract(num2);
                cout << "Result of substraction is: \n";
                num1.printComplexNum();
            break;
            case 6:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                num1.printComplexNum();
                num2.printComplexNum();
            break;
            case 7:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                cout << num1.toString() << endl;
                cout << num2.toString() << endl;
            break;
            case 8:
                num1.setComplexNum(enterNumber(number));
                num2.setComplexNum(enterNumber(number));
                cout << "Your numbers are: \n";
                num1.printComplexNum();
                num2.printComplexNum();
                num1.multiplication(num2);
                cout << "Result of multiplication is: \n";
                num1.printComplexNum();
            break;
            case 9:
                controlNumber = 0;
            break;
            default:
                cout << "Number out of range, try again \n";
            break;
        }
    }
    cout << "Programm has ended \n";
    return 0;
}