#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;

// w komentarzu pierwsza wersja

class Time{
    private: 
        int minutesFromMidnight_;
    public:
        Time(int totalMinutes){
            minutesFromMidnight_ = (totalMinutes < 0) ? 0 : totalMinutes;
        }
        
        Time(int hour, int minutes){
            if(hour >= 0 && hour < 24 && minutes >= 0 && minutes < 60){
                minutesFromMidnight_ = hour * 60 + minutes;
            } else {
                minutesFromMidnight_ = 0;
            }
        }

        Time(const string &timeString){
            istringstream ss(timeString);
            int hour, minutes;
            char colon;

            if (ss >> hour >> colon >> minutes && colon == ':'){
                if(hour >= 0 && hour < 24 && minutes >= 0 && minutes < 60){
                    minutesFromMidnight_ = hour * 60 + minutes;
                    return;
                }
            }
            minutesFromMidnight_ = 0;
        }

        void print() {
            int hour = minutesFromMidnight_ / 60;
            int minutes = minutesFromMidnight_ % 60;
            cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minutes << endl;

        }
    /*private: 
        int time1_;
        int time2_;
        string time3_;
        string time4_;
        int option_;
    public:
        Time(int time){
            time1_ = time;
            option_  = 1;
        }

        Time(int time1, int time2){
            time1_ = time1;
            time2_ = time2;
            option_  = 2;
        }

        Time(string time1, string time2){
            time3_ = time1;
            time4_ = time2;
            option_  = 3;
        }

        int getTime1() {
            return time1_;
        }

        int getTime2() {
            return time2_;
        }

        string getTime3() {
            return time3_;
        }

        string getTime4() {
            return time4_;
        }

        void print(){
            switch(option_){
                case 1:
                cout << time1_ << " minutes from 00:00 " << endl;
                break;
                case 2:
                cout << time1_ << " hour and " << time2_ << " minutes from 00:00 \n";
                break;
                case 3:
                cout << time3_ + ":" +  time4_ << endl;
                break;
                default:
                break;
            }
        }*/

};

int main () {
    Time t1(597);
    Time t2(5,17);
    Time t3("21:37");
    t1.print();
    t2.print();
    t3.print();
    /*Time T1(24);
    Time T2(12,2);
    Time T3("21","37");
    T1.print();
    T2.print();
    T3.print();*/
    return 0;
}