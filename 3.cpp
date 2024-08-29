#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void getTime() {
        cout << "Enter time (hh:mm:ss): ";
        cin >> hours >> minutes >> seconds;
    }

    void printTime() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    void addTime(const Time& t) {
        seconds += t.seconds;
        minutes += t.minutes + seconds / 60;
        hours += t.hours + minutes / 60;

        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter time 1:" << endl;
    t1.getTime();

    cout << "Enter time 2:" << endl;
    t2.getTime();

    cout << "Time 1:" << endl;
    t1.printTime();

    cout << "Time 2:" << endl;
    t2.printTime();

    t1.addTime(t2);

    cout << "Time 1 + Time 2:" << endl;
    t1.printTime();

    return 0;
}