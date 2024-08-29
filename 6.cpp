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

    static void getcount() {
        cout << "Current count: " << count << endl;
    }
};

int Item::count = 0;

int main() {
    Item a, b, c;

    a.getdata(10);
    b.getdata(20);
    c.getdata(30);

    Item::getcount(); // Output: Current count: 3

    return 0;
}