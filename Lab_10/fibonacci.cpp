#include <iostream>
using namespace std;

class fib{
        private:
        int *data_ , size_;
        public:
        fib(int size){
            size_ = size;
            if(size <= 1){
                cout << "Size must be at least 2" << endl;
                return;
            }

            data_ = new int [size];
            *data_ = 1;
            *(data_+1) = 1;

            for(int i = 2; i < size; i++){
                *(data_ + i) = *(data_ + i - 2) + *(data_ + i  - 1);
            }
        }

        ~fib()  {
            if(size_ <= 1){
                return;
            }
            delete[] data_;
        }

        int getSize(){
            return size_;
        }

        void print(){
            if(size_ <= 1){
                return;
            }
            cout << size_ <<" values of fibonacci sequence: \n";
            for(int i = 0; i < size_; i++){
			    cout <<*(data_ + i) << endl;
            }
        }

        void add(){
            if(size_ <= 1){
                return;
            }
                size_ ++;
                int tmp[size_];
        for(int i = 0; i < size_ - 1; i++ ){
                tmp[i] = data_[i];
        }

        data_ = new int [size_];
        tmp[size_ - 1] = tmp[size_ - 2] + tmp[size_ - 3];

        for(int i = 0; i < size_; i++){
            data_[i] = tmp[i];
        }
        }
};

class fib_start : public fib {
    private: 
        int *startValue_;
        int size_ = getSize();
    public:
        fib_start(int size, int firstValue, int secondValue ) : fib(size) {
            size_= size;
            if(size_ <= 1){
                cout << "Size must be at least 2" << endl;
                return;
            }

            startValue_ = new int [size_];
            *startValue_ = firstValue;
            *(startValue_+1) = secondValue;

            for(int i = 2; i < size; i++){
                *(startValue_ + i) = *(startValue_ + i - 2) + *(startValue_ + i  - 1);
            }
        }

        void print(){
            if(size_ <= 1){
                return;
            }
            cout << size_ <<" values of fibonacci sequence: \n";
            for(int i = 0; i < size_; i++){
			    cout <<*(startValue_ + i) << endl;
            }
        }

        void remove(){
            size_ --;
            if(size_ <= 1){
                return;
            }
                int tmp[size_];
        for(int i = 0; i < size_; i++ ){
                tmp[i] = startValue_[i+1];
        }

        startValue_ = new int [size_];
    
        for(int i = 0; i < size_; i++){
            startValue_[i] = tmp[i];
        }


        }
}; 

int main (){
    //fib x(1);
    fib_start y(3,5,6);
    //x.print ();
    //x.add ();
    //x.print ();
    y.print();
    y.remove();
    y.print();
    y.remove();
    y.print();
return 0;
}