#include <iostream>
#include <cstring>
using namespace std;

struct valuesforConstructor1{
    char content[10];
    int in_out;
};

class CD {
    private:
        char *content_;
        int in_out_;
    public:
        CD(valuesforConstructor1 val){
            content_ = new char[11];
            strcpy(content_, val.content);
            in_out_ = val.in_out; 
        }

        ~CD(){
            delete [] content_;
        }

        int getINOUT(){
            return in_out_;
        }

        char *getContent(){
            return content_;
        }

        void read(){
            switch(in_out_){
                case 0:
                    cout << "Reader is empty, instert a CD \n";
                break;
                case 1:
                    cout << "Content on CD: \n";
                    for (size_t i = 0; i < 10; ++i){
                        cout << *(content_ + i);
                    } 
                    cout << endl;
                break;
                default:
                    cout << "Satus of CD is undefined \n";
                break;
            }
        }

        void In_Out(){
            int x = 1;
            while (x==1) {
                cout << "What would you like to do with your CD? \n 0. Take out \n 1. Put in \n";
                cin >> in_out_;
                if (in_out_ == 0){
                    cout << "CD is out \n";
                    x = 0;
                } else if (in_out_ == 1) {
                    cout << "CD is in \n";
                    x = 0;
                } else {
                    cout << "Undefined choice, try again \n";
                }
            }
        }
};

class CDRW : public CD{
    public:
        CDRW(valuesforConstructor1 val) : CD(val){
        }

        void write(){
            for (size_t i = 0; i < 10; ++i){
               cin >> *(CD::getContent() + i);
            }
        }
};

class BR : public CDRW{
    public:
        int in_out_ = getINOUT(); 
        char *content_ = getContent();
        BR(valuesforConstructor1 val) : CDRW(val){
            char *contentFromCD = getContent();
            content_ = new char[21];
            strcpy(content_, contentFromCD);
            in_out_ = getINOUT(); 
        }

        void write(){
            for (size_t i = 0; i < 20; ++i){
               cin >> *(CDRW::getContent() + i);
            }
        }

        void read(){
            switch(CDRW::getINOUT()){
                case 0:
                    cout << "Reader is empty, instert a CD \n";
                break;
                case 1:
                    cout << "Content on CD: \n";
                    for (size_t i = 0; i < 20; ++i){
                        cout << *(CDRW::getContent() + i);
                    } 
                    cout << endl;
                break;
                default:
                    cout << "Satus of CD is undefined \n";
                break;
            }
        }
};

int main () {
    int userAction;
    int CDchoice;
    int controlNumber = 1;
    valuesforConstructor1 cont1 = {'a','b','b','s','s','d','d','a','d','e',1};
    CD CD1(cont1);
    CDRW CDRW1(cont1);
    BR BR1(cont1);
    //cout << CD1.getINOUT() << endl;
    if (CD1.getINOUT() == 0) {
        cout << "State of your CD: OUT " << endl;
    } else if (CD1.getINOUT() == 1) {
        cout << "State of your CD: IN " << endl;
    } else {
        cout << "State of your CD: UNDEFINED " << endl;
    }
    while (controlNumber == 1){
        cout << "Avaliable CDs: \n 1. CD1 \n 2. CDRW1 \n 3. BR1 \n";
        cin >> CDchoice;
        if (CDchoice < 1 || CDchoice > 3){
            cout << "This CD is not avaliable \n";
            continue;
        }
        cout << " Choose your action: \n 1. Change state of your CD \n 2. Read values \n 3. Edit content of CD \n 4. Exit programm \n";
        cin >> userAction;
        switch(userAction){
            case 1:
                if (CDchoice == 1){
                    CD1.In_Out();
                } else if (CDchoice == 2){
                    CDRW1.In_Out();
                } else if (CDchoice == 3){
                    BR1.In_Out();
                }
            break;
            case 2:
                if (CDchoice == 1){
                    CD1.read();
                } else if (CDchoice == 2){
                    CDRW1.read();
                } else if (CDchoice == 3){
                    BR1.read();
                } 
            break;
            case 3:
                if (CDchoice == 1){
                    cout << "This option is not possible on this CD \n";
                } else if (CDchoice == 2){
                    CDRW1.write();
                } else if (CDchoice == 3){
                    BR1.write();
                } 
            break;
            case 4:
                controlNumber = 0;
            default:
                cout << "Number out of range, try again \n";
            break;
        }
    }
    cout << "Programm has ended \n";
    return 0;
}