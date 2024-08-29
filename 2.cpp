#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    void displayDimensions() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    double calculateArea(const Rectangle& rect) {
        return rect.length * rect.width;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    rect.displayDimensions();
    cout << "Area: " << rect.calculateArea(rect) << endl;

    return 0;
}