#include <iostream>

class MyClass {
public:
    void start(int param1 = 0) {
        std::cout << "Start with one parameter: " << param1 << std::endl;
    }

    void start(int param1, int param2) {
        std::cout << "Start with two parameters: " << param1 << ", " << param2 << std::endl;
    }

    void start(int param1, int param2, int param3) {
        std::cout << "Start with three parameters: " << param1 << ", " << param2 << ", " << param3 << std::endl;
    }
};

int main() {
    MyClass obj;

    obj.start();              // Calls start with one parameter
    obj.start(10);            // Calls start with one parameter
    obj.start(20, 30);        // Calls start with two parameters
    obj.start(40, 50, 60);    // Calls start with three parameters

    return 0;
}
