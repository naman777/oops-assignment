#include <iostream>
using namespace std;

class XYZ; 
class ABC;

class ABC {
private:
    int numA;

public:
    ABC(int a) : numA(a) {}

    // Friend function declaration
    friend int add(ABC, XYZ);
};

class XYZ {
private:
    int numB;

public:
    XYZ(int b) : numB(b) {}

    // Friend function declaration
    friend int add(ABC, XYZ);
};

int add(ABC objA, XYZ objB) {
    return objA.numA + objB.numB;
}

int main() {
    ABC objA(5); 
    XYZ objB(10); 

    int result = add(objA, objB);

    std::cout << "Sum of numA and numB: " << result << std::endl;

    return 0;
}
