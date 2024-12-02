#include <iostream>
using namespace std;

void nestedFunction() {
    try {
        throw runtime_error("Inner exception");
    } catch (...) {
        cout << "Handling inside nestedFunction." << endl;
        throw; // Rethrow exception
    }
}

int main() {
    try {
        nestedFunction();
    } catch (exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
