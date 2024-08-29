#include <iostream>
using namespace std;

class Item {
private:
    static int count;
    int value;

public:
    void getdata(int a) {
        count++;
        value = a;
    }

    void getcount() {
        cout << "Current value of count: " << count << endl;
    }
};

int Item::count = 0;

int main() {
    Item a, b, c;

    a.getdata(10);
    a.getcount();
    b.getdata(20);
    b.getcount();
    c.getdata(30);
    c.getcount();


    return 0;
}