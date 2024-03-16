#include<iostream>
#include<algorithm>
using namespace std;

void displayPermutations(char *str, char *begin, char *end) {
    if (begin == end){
        cout << str << endl;
        return;
    }

    for (char *c = begin; c < end; ++c){
        swap(*begin, *c);
        displayPermutations(str, begin + 1, end);
        swap(*begin, *c);

    }


}

int main () {
    string input;
    cout << "Enter a string \n";
    cin >> input;
    char *str = &input[0];
    char *begin = str;
    char *end = str + input.size();

    cout << "Permutations are: " << endl;
    displayPermutations(str,begin,end);




    /*size_t size;
    cout << "How many signs would you like to write? \n";
    cin >> size;
    char tab[size];
    bool loopexit = false;
    int x = 1;
    int *ptrx = &x;
    for (size_t i = 1; i<= size; ++i){
        *ptrx *= i;
    }
    char *ptr = tab;
    //char tmp;
    int maincount = 1;
    int mainmaincount = 1;
    int count = 1;
    cout << "Please insert those signs \n";
    for (size_t i = 0; i < size; ++i) {
        cin >> *(tab + i);        
    }
    //cout << *ptrx << endl;
    for (size_t i = 0; i < size; ++i){
        count = 1;
        maincount = 1;
        loopexit = false;
        for (size_t j = size - 1; j >= i + 1; --j){
            
            if (i>0){    
                for (size_t k = i; k >= 1; --k){
                    if (*(tab + i) == *(tab + i - k)){
                        loopexit = true;
                    }
                    //cout <<"Loop: "<< loopexit << endl;
                    }
                    if (loopexit == true){
                        break;
                    } 
                    if (*(tab + i) == *(tab + j)){ 
                        count += 1;        
                    }
                    //tmp = *(tab + i);

                    
                    //cout << count << endl;

            }
            if (i == 0 && *(tab + i) == *(tab + j)){ 
               count += 1;        
            }
        }

        for (size_t i = 1; i<= count; ++i){
            maincount *= i;
            //cout << maincount << " for \n";
        }
        mainmaincount *= maincount;
        cout <<  mainmaincount << endl;
    }
    int loopcount = x/mainmaincount;
    char tmp2;
    while (loopcount > 0){
        for (size_t i = 0; i < size; ++i){
            for (size_t j = size - 1; j >= 0 ; ++j){
                tab[i] = tab[size - j];
                cout << tab[j];
                tab
                
            }
            cout << endl;
        
    
        }
        cout << endl;
        loopcount--;
        //cout << loopcount << endl;
    }
    */
    




    return 0;
}