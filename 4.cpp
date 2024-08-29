#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time addTime(const Time& t) {
        Time sum;
        sum.seconds = seconds + t.seconds;
        sum.minutes = minutes + t.minutes + (sum.seconds / 60);
        sum.hours = hours + t.hours + (sum.minutes / 60);
        sum.seconds %= 60;
        sum.minutes %= 60;
        return sum;
    }
};

int main() {
    Time t1(2, 30, 45);
    Time t2(1, 15, 30);
    Time t3;

    t3 = t1.addTime(t2);

    t1.displayTime();
    t2.displayTime();
    t3.displayTime();

    return 0;
}