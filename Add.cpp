#include <iostream>
using namespace std;

class Add {
    // Data members
    int a, b, c;

public:  
    // Member functions
    void input(int x, int y) { // Input
        a = x;
        b = y;
    }

    void cal() { // Calculation
        c = a + b;
    }

    void display() { // Output
        cout << "a + b = " << c << endl;
    }
};

int main() {
    Add obj; // Object creation
    obj.input(12, 14);
    obj.cal();
    obj.display(); // Correct function call
    return 0;
}
