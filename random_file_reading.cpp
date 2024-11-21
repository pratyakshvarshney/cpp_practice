#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::binary);

    if (!file) {
        ofstream("data.txt").close();
        file.open("data.txt", ios::in | ios::out | ios::binary);
    }

    file.seekp(10);
    file.write("data", 4);

    file.seekg(10);
    char buffer[5] = {};
    file.read(buffer, 4);

    cout << "data read from offset 10: " << buffer << endl;

    file.close();

    return 0;
}
