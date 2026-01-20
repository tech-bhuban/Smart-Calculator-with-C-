
#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int divide(int a, int b) {
        if (b == 0)
            throw runtime_error("Division by zero!");
        return a / b;
    }
};

int main() {
    Calculator c;
    try {
        cout << c.add(3, 5) << endl;
        cout << c.add(2.5, 4.1) << endl;
        cout << c.divide(10, 0) << endl;
    }
    catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}



